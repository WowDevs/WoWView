UI_HEADERS_DIR = ./include

CONFIG += qt
QT += network
QT += gui

TARGET = wowview

DEFINES *= QT_USE_QSTRINGBUILDER

FORMS += include/mainWindow.ui
FORMS += include/newChar_dialog.ui

HEADERS += include/charData.h
HEADERS += include/newChar_dialog.h
HEADERS += include/mainWindow.h

SOURCES += src/main.cpp
SOURCES += src/charData.cpp
SOURCES += src/mainWindow.cpp
SOURCES += src/newChar_dialog.cpp

SOURCES += lib/qt-json/json.cpp
HEADERS += lib/qt-json/json.h
