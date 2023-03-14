QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    calisay.cpp \
    calisayinfo.cpp \
    eslabra.cpp \
    eslabrainfo.cpp \
    gabriel.cpp \
    gabrielinfo.cpp \
    labrador.cpp \
    labradorinfo.cpp \
    main.cpp \
    mainwindow.cpp \
    santos.cpp \
    santosinfo.cpp

HEADERS += \
    calisay.h \
    calisayinfo.h \
    eslabra.h \
    eslabrainfo.h \
    gabriel.h \
    gabrielinfo.h \
    labrador.h \
    labradorinfo.h \
    mainwindow.h \
    santos.h \
    santosinfo.h

FORMS += \
    calisay.ui \
    calisayinfo.ui \
    eslabra.ui \
    eslabrainfo.ui \
    gabriel.ui \
    gabrielinfo.ui \
    labrador.ui \
    labradorinfo.ui \
    mainwindow.ui \
    santos.ui \
    santosinfo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    src.qrc
