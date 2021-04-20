#include "sqlitedb.hpp"

SQLiteDB::SQLiteDB(const std::string& db_filename) : db_name(db_filename)
{
    open_db();
}

SQLiteDB::~SQLiteDB()
{
    close_db();
    delete_db();
}

void SQLiteDB::open_db()
{
    if (sqlite3_open(db_name.c_str(), &db))
    {
        std::cerr << "Can't open database " << db_name << ": " << sqlite3_errmsg(db) << std::endl;
        exit(1);
    }
    else
    {
        std::cout << "Opened database " << db_name << std::endl;
    }
}

void SQLiteDB::close_db()
{
    sqlite3_close(db);
    std::cout << "Closed database " << db_name << std::endl;
}

void SQLiteDB::delete_db()
{
    std::filesystem::remove(db_name);
    std::cout << "Deleted database " << db_name << std::endl;
}

void SQLiteDB::run_query(const std::string& query)
{
    char *error_msg = 0;

    if (sqlite3_exec(db,query.c_str(),0,0,&error_msg))
    {
        std::cerr << "Couldn't execute query: " << sqlite3_errmsg(db) << std::endl;
    }
    else
    {
        //std::cout << query << std::endl;
    }
}

void SQLiteDB::create_tables()
{
    //todo
    //std::cout << "Created tables" << std::endl;
}
