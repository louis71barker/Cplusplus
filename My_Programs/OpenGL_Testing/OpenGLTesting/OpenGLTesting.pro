TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp
SOURCES += tut1.cpp

include(deployment.pri)
qtcAddDeployment()

