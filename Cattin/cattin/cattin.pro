QT       += core gui sql network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aboutbill.cpp \
    add_drink.cpp \
    add_food.cpp \
    add_user.cpp \
    change_drink_price.cpp \
    change_drink_status.cpp \
    change_food_price.cpp \
    change_food_status.cpp \
    change_pwd.cpp \
    change_user_root.cpp \
    main.cpp \
    manage.cpp \
    mythread.cpp \
    widget.cpp

HEADERS += \
    aboutbill.h \
    add_drink.h \
    add_food.h \
    add_user.h \
    change_drink_price.h \
    change_drink_status.h \
    change_food_price.h \
    change_food_status.h \
    change_pwd.h \
    change_user_root.h \
    manage.h \
    mythread.h \
    struct.h \
    widget.h

FORMS += \
    aboutbill.ui \
    add_drink.ui \
    add_food.ui \
    add_user.ui \
    change_drink_price.ui \
    change_drink_status.ui \
    change_food_price.ui \
    change_food_status.ui \
    change_pwd.ui \
    change_user_root.ui \
    manage.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
