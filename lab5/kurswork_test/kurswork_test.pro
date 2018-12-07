QT += testlib
QT += gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    event.cpp \
    test_event.cpp

HEADERS += \
    event.h \
    test_event.h
