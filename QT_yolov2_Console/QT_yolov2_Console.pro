# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Tools.
# ------------------------------------------------------

TEMPLATE = app
TARGET = QT_yolov2_Console
DESTDIR = ./
QT += core gui widgets
CONFIG += release
DEFINES += WIN64 QT_DLL QT_WIDGETS_LIB
INCLUDEPATH += ./yolo_data/src \
    C:/openCV3.2.0/opencv/build/include \
    ./GeneratedFiles \
    . \
    ./GeneratedFiles/$(ConfigurationName)
LIBS += -L"./yolo_data" \
    -L"C:/openCV3.2.0/opencv/build/x64/vc14/lib" \
    -lyolo_cpp_dll \
    -lopencv_world320
DEPENDPATH += .
MOC_DIR += ./GeneratedFiles/Release$(ConfigurationName)
OBJECTS_DIR += release
UI_DIR += ./GeneratedFiles
RCC_DIR += ./GeneratedFiles
include(QT_yolov2_Console.pri)
