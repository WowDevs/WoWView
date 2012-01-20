CONFIG += qt
QT += network
QT += gui

TARGET = wowview

DEFINES *= QT_USE_QSTRINGBUILDER

HEADERS += include/charData.h
HEADERS += include/ui_mainWindow.h
HEADERS += include/ui_newChar.h
HEADERS += include/wowview.h

SOURCES += src/main.cpp
SOURCES += src/wowview.cpp
SOURCES += src/charData.cpp

SOURCES += lib/qt-json/json.cpp
HEADERS += lib/qt-json/json.h
