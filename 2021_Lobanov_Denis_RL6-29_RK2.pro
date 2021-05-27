QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        _10__12_18_zadachi.cpp \
        _11_zadacha.cpp \
        _13_zadacha.cpp \
        _14_zadacha.cpp \
        _15_zadacha.cpp \
        _16_zadacha.cpp \
        _17_zadacha.cpp \
        _19_zadacha.cpp \
        _1_zadacha.cpp \
        _20_zadacha.cpp \
        _21_zadacha.cpp \
        _2_zadacha.cpp \
        _3_zafacha.cpp \
        _4_and_5_zadachi.cpp \
        _6_zadacha.cpp \
        _7_zadacha.cpp \
        _8_zadacha.cpp \
        _9_zadacha.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    _10__12_18_zadachi.h \
    _11_zadacha.h \
    _13_zadacha.h \
    _14_zadacha.h \
    _15_zadacha.h \
    _16_zadacha.h \
    _17_zadacha.h \
    _19_zadacha.h \
    _1_zadacha.h \
    _20_zadacha.h \
    _21_zadacha.h \
    _2_zadacha.h \
    _3_zafacha.h \
    _4 and 5_zadachi.h \
    _4_and_5_zadachi.h \
    _6_zadacha.h \
    _7_zadacha.h \
    _8_zadacha.h \
    _9_zadacha.h
