QT += widgets

SOURCES += main.cpp \
    receivefromaudio.cpp \
    sendtoaudio.cpp \
    thread.cpp

HEADERS += \
    receivefromaudio.h \
    sendtoaudio.h \
    thread.h

# Forms and resources
FORMS +=

EXAMPLE_FILES = *.png

# install
target.path = $$[QT_INSTALL_EXAMPLES]/corelib/ipc/sharedmemory
INSTALLS += target

DISTFILES +=
