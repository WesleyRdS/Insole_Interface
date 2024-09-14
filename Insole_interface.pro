QT       += core gui quick serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    colorchanger.cpp \
    main.cpp \
    mainwindow.cpp \
    tensiometer.cpp

HEADERS += \
    colorchanger.h \
    mainwindow.h \
    tensiometer.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../Imagens/palmilha.png \
    InsoleView.qml \
    images/palmilha.png \
    tensiometer.qml

RESOURCES += \
    resources.qrc
