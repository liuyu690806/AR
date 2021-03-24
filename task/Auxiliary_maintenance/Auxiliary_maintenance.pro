#-------------------------------------------------
#
# Project created by QtCreator 2021-01-14T20:16:19
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets sql opengl
LIBS+=-lopengl32 -lglu32

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Auxiliary_maintenance
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        sign_in.cpp \
    mypushbutton.cpp \
    mainscence.cpp \
    maintenance_mask.cpp \
    mask_management.cpp \
    vedio_query.cpp \
    personal_inf.cpp \
    user_management.cpp \
    playerslider.cpp \
    mylabel.cpp \
    mylabel2.cpp \
    mycombobox.cpp \
    mypushbutton1.cpp \
    myinterface.cpp \
    mycombobox.cpp \
    myopengl.cpp \
    mesh.cpp \
    camera.cpp \
    model.cpp

HEADERS += \
        sign_in.h \
    mypushbutton.h \
    mainscence.h \
    maintenance_mask.h \
    mask_management.h \
    vedio_query.h \
    personal_inf.h \
    user_management.h \
    playerslider.h \
    mylabel.h \
    mylabel2.h \
    mycombobox.h \
    mypushbutton1.h \
    myinterface.h \
    mycombobox.h \
    myopengl.h \
    mesh.h \
    camera.h \
    model.h

FORMS += \
        sign_in.ui \
    mainscence.ui \
    maintenance_mask.ui \
    mask_management.ui \
    vedio_query.ui \
    personal_inf.ui \
    user_management.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/assimp5.1/release/ -lassimp-vc141-mtd
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/assimp5.1/debug/ -lassimp-vc141-mtd

INCLUDEPATH += $$PWD/assimp5.1/include
DEPENDPATH += $$PWD/assimp5.1/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/opencv4.3.0/x86/vc16/lib/ -lopencv_world430
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/opencv4.3.0/x86/vc16/lib/ -lopencv_world430d

INCLUDEPATH += $$PWD/opencv4.3.0/include
DEPENDPATH += $$PWD/opencv4.3.0/include
