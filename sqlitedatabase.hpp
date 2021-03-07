#pragma once

#include <sqlite3.h>

#include <iostream>
#include <string>

class SQLiteDatabase
{
public:
    SQLiteDatabase(const std::string&);
    void open_db(const std::string&);
private:
    sqlite3 *db;
};
