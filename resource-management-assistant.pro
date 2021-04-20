TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

LIBS += \
        -lsqlite3

SOURCES += \
        main.cpp \
        sqlitedatabase.cpp

DESTDIR = build/
OBJECTS_DIR = build/obj/

HEADERS += \
    main.hpp \
    sqlitedatabase.hpp

STATECHARTS +=
