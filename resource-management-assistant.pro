TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

LIBS += \
        -lsqlite3

SOURCES += \
        main.cpp \
        sqlitedb.cpp

DESTDIR = build/
OBJECTS_DIR = build/obj/

HEADERS += \
    main.hpp \
    sqlitedb.hpp

STATECHARTS +=
