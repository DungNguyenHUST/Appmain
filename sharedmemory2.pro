QT += widgets
QT += widgets multimedia winextras
QT       += core gui multimedia
QT += multimediawidgets

SOURCES += main.cpp \
    receivefromaudio.cpp \
    sendtoaudio.cpp \
    musicplayer.cpp \
    weather.cpp

HEADERS += \
    receivefromaudio.h \
    sendtoaudio.h \
    musicplayer.h \
    weather.h

# Forms and resources
FORMS +=

EXAMPLE_FILES = *.png

# install
target.path = $$[QT_INSTALL_EXAMPLES]/corelib/ipc/sharedmemory
INSTALLS += target

DISTFILES += \
    Maid with the Flaxen Hair.mp3 \
    Sleep Away.mp3 \
    Maid with the Flaxen Hair.mp3 \
    Sleep Away.mp3 \
    Maid with the Flaxen Hair.mp3 \
    Sleep Away.mp3

RESOURCES +=
