#include "childdorm.h"
#include "ui_childdorm.h"

childdorm::childdorm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::childdorm)
{
    ui->setupUi(this);
}

childdorm::~childdorm()
{
    delete ui;
}

//催餐操作
void childdorm::on_pushButton_clicked()
{
    QMessageBox::warning(this,"催餐","催餐成功!\n厨师正在努力中,请耐心等待!");
}

//加餐操作
void childdorm::on_pushButton_2_clicked()
{
    this->hide();
    emit Interface();
}

//退餐操作
void childdorm::on_pushButton_3_clicked()
{
    emit Inter_delete();
}

//退出
void childdorm::on_pushButton_4_clicked()
{
    exit(-1);
}


void childdorm::getData(QWidget *parent) //获取父窗口指针
{
    //获取父窗口变量
    Widget * p = (Widget*) parent;  //获取父窗口指针
    FoodVec = p->getVec();
    FoodVec_No = p->getVecNo();
    tcpsocket = p->getsocket();
}

//打印订单
void childdorm::getvec(vector<FoodInfo> FoodVec_no,vector<FoodInfo> FoodVec_in)
{
    //打印已上餐的菜品
    QStringList headtext;
    headtext<<"序号"<<"餐名"<<"价格"<<"数量"<<"备注";
    ui->tableWidget->setColumnCount(headtext.count());//列表设置为和headtext相等
    ui->tableWidget->setHorizontalHeaderLabels(headtext);//插入表头
    ui->tableWidget->setRowCount(0);
    ui->lineEdit->setText(FoodVec_no[1].table);

    for (int j=1;j<(FoodVec_no).size();j++)
    {
        int rowcount = ui->tableWidget->rowCount();

        ui->tableWidget->insertRow(rowcount);

        QTableWidgetItem *column = new QTableWidgetItem(FoodVec_no[j].number);
        QTableWidgetItem *column1 = new QTableWidgetItem(FoodVec_no[j].food);
        QTableWidgetItem *column2 = new QTableWidgetItem(FoodVec_no[j].price);
        QTableWidgetItem *column3 = new QTableWidgetItem(FoodVec_no[j].quatity);
        QTableWidgetItem *column4 = new QTableWidgetItem(FoodVec_no[j].post);

        ui->tableWidget->setItem(rowcount,0,column);
        ui->tableWidget->setItem(rowcount,1,column1);
        ui->tableWidget->setItem(rowcount,2,column2);
        ui->tableWidget->setItem(rowcount,3,column3);
        ui->tableWidget->setItem(rowcount,4,column4);

     }

    //打印未上餐的菜品
    QStringList headtext1;
    headtext1<<"序号"<<"餐名"<<"价格"<<"数量"<<"备注";
    ui->tableWidget_2->setColumnCount(headtext1.count());//列表设置为和headtext相等
    ui->tableWidget_2->setHorizontalHeaderLabels(headtext1);//插入表头
    ui->tableWidget_2->setRowCount(0);

    for (int j=0;j<(FoodVec_in).size();j++)
    {
        int rowcount = ui->tableWidget_2->rowCount();

        ui->tableWidget_2->insertRow(rowcount);

        QTableWidgetItem *column = new QTableWidgetItem(FoodVec_in[j].number);
        QTableWidgetItem *column1 = new QTableWidgetItem(FoodVec_in[j].food);
        QTableWidgetItem *column2 = new QTableWidgetItem(FoodVec_in[j].price);
        QTableWidgetItem *column3 = new QTableWidgetItem(FoodVec_in[j].quatity);
        QTableWidgetItem *column4 = new QTableWidgetItem(FoodVec_in[j].post);

        ui->tableWidget_2->setItem(rowcount,0,column);
        ui->tableWidget_2->setItem(rowcount,1,column1);
        ui->tableWidget_2->setItem(rowcount,2,column2);
        ui->tableWidget_2->setItem(rowcount,3,column3);
        ui->tableWidget_2->setItem(rowcount,4,column4);

     }
}

//删除菜品，并且将删除的菜品出给
void childdorm::Delete_food()  //退菜操作
{
        int currow = ui->tableWidget->currentRow();//获取行号
        if(currow == -1)
        {
            QMessageBox::warning(this,"提示","操作有误!");
        }
        else
        {
            QString str = ui->tableWidget->item(currow,0)->text(); //获取序号
            QString str1 = ui->tableWidget->item(currow,1)->text();//获取菜名
            QString str2 = ui->tableWidget->item(currow,2)->text();//获取价格
            QString str3 = ui->tableWidget->item(currow,3)->text();//获取价格
            QString str4 = ui->tableWidget->item(currow,4)->text();//获取备注

            QString S = ui->lineEdit->text(); //桌号
            QByteArray ba = S.toUtf8();
            memcpy(F_head.table,ba.data(),ba.size()+1);  //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
            ba = str.toUtf8();
            memcpy(F_head.number,ba.data(),ba.size()+1);  //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
            ba = str1.toUtf8();
            memcpy(F_head.food,ba.data(),ba.size()+1);    //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
            ba = str2.toUtf8();
            memcpy(F_head.price,ba.data(),ba.size()+1);   //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
            ba = str3.toUtf8();
            memcpy(F_head.quatity,ba.data(),ba.size()+1); //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
            ba = str4.toUtf8();
            memcpy(F_head.post,ba.data(),ba.size()+1);    //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
            ui->tableWidget->removeRow(currow);//删除当前行
        }

        //从 FoodVec_No 中删除订单
        for(int i = 0; i < FoodVec_No->size(); i++)
        {
            if((strcmp(FoodVec_No->at(i).number,F_head.number) == 0) && (strcmp(FoodVec_No->at(i).post,F_head.post) == 0))
            {
                FoodVec_No->erase(FoodVec_No->begin ()+i);
                break;
            }
        }

        //从 FoodVec 中删除订单
        for(int i = 0; i < FoodVec->size(); i++)
        {
            if((strcmp(FoodVec->at(i).number,F_head.number) == 0) && (strcmp(FoodVec->at(i).post,F_head.post) == 0))
            {
                FoodVec->erase(FoodVec->begin ()+i);//删除订单中该元素
                break;
            }
        }

        //向服务端发送更新后的订单数据
        QByteArray a1;
        a1.resize(sizeof(FoodInfo)*FoodVec->size());
        memcpy(a1.data(),FoodVec->data(),sizeof(FoodInfo)*FoodVec->size());
        tcpsocket->write(a1);
}

