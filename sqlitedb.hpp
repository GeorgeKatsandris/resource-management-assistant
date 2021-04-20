#pragma once

#include <sqlite3.h>

#include <iostream>
#include <string>
#include <filesystem>
#include <vector>

#define MULTI_LINE_STRING(...) #__VA_ARGS__
#define RUN_MULTI_LINE_QUERY(...) run_query(#__VA_ARGS__)

class SQLiteDB
{
public:
    SQLiteDB(const std::string&);
    ~SQLiteDB();

    void run_query(const std::string&);
private:
    sqlite3 *db;
    const std::string db_name;

    void open_db();
    void close_db();
    void delete_db();
    void create_tables();
};
