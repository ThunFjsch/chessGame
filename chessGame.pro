TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.c \
        console_functions/devConsole.c \
        console_functions/display.c \
        console_functions/keyboard.c \
        console_functions/systemErrors.c \
        events.c \
        fsm_functions/fsm.c \
        states.c

HEADERS += \
    appInfo.h \
    console_functions/devConsole.h \
    console_functions/display.h \
    console_functions/keyboard.h \
    console_functions/systemErrors.h \
    events.h \
    fsm_functions/fsm.h \
    states.h
