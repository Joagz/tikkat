#include <stdio.h>
#include <stdlib.h>
#include "../../libs/sqlite/sqlite3.h"

#define DB_NAME "../../tikkat_db"

// Included from documentation: https://www.sqlite.org/quickstart.html
static int callback(void *NotUsed, int argc, char **argv, char **azColName){
    int i;
    for(i=0; i<argc; i++){
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}
static int testConnection(){
    sqlite3 * db;
    int rc = sqlite3_open(DB_NAME, &db);

    if( rc ){
        fprintf(stderr, "Can't open DB, exiting program...", sqlite3_errmsg(db));
        exit(0);
    }

    else {
        printf("Connection to SQLite db %s is good!", DB_NAME);
        return EXIT_SUCCESS;
    }
}
int exec(char * stmt){
    
    sqlite3 * db;
    char * errmsg;
    int rc = sqlite3_open(DB_NAME, &db);
    
    if( rc ) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return EXIT_FAILURE;
    }

    rc = sqlite3_exec(db, stmt, callback, 0, &errmsg);

    if(rc!=SQLITE_OK){
        fprintf(stderr, "SQL error: %s\n", errmsg);
        sqlite3_free(errmsg);
    }

    sqlite3_close(db);

    return EXIT_SUCCESS;

}




