#ifndef STRUCT_H
#define STRUCT_H

#pragma pack(push, 1)  // 开始按 1 字节对齐

typedef struct Food
{
    char table[5]; //桌号
    char number[10];//序号
    char food[100]; //餐名
    char price[10];//价格
    char quatity[10];//数量
    char post[200];//备注
}FoodInfo;

typedef struct Menu
{
    char number[10];//序号
    char food[100]; //餐名
    char price[10];//价格
    char state[20];//状态
}MenuInfo;

#pragma pack(pop)   // 恢复默认对齐
#endif // STRUCT_H
