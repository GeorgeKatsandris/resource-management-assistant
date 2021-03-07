#include "sqlitedatabase.hpp"

SQLiteDatabase::SQLiteDatabase(const std::string& db_filename)
{    
    sqlite3 *db;
    int rc = sqlite3_open(db_filename.c_str(), &db);
    if (rc)
    {
        std::cerr << "Can't open database " << db_filename << ": " << sqlite3_errmsg(db) << std::endl;
        exit(1);
    }
    else
    {
        std::clog << "Opened database " << db_filename << " successfully" << std::endl;
    }
}
