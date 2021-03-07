#include "sqlitedatabase.hpp"

SQLiteDatabase::SQLiteDatabase(const std::string& db_filename)
{
    open_db(db_filename);
}

void SQLiteDatabase::open_db(const std::string& db_filename)
{
    if (sqlite3_open(db_filename.c_str(), &db))
    {
        std::cerr << "Can't open database " << db_filename << ": " << sqlite3_errmsg(db) << std::endl;
        exit(1);
    }
    else
    {
        std::clog << "Opened database " << db_filename << " successfully" << std::endl;
    }
}
