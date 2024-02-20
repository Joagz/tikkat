#include <stdlib.h>
#include "../libs/tikkatstd.h"
#include "../libs/tikkatstd.c"
#include "./db/db.c"

struct token {
    char * value;
    int type;
};

struct token * readCommand(int argc, char * argv[]);
struct token readToken(char argv[]);

int main(int argc, char *argv[])
{

    testConnection();
    exec("SELECT * FROM tickets");

    return EXIT_SUCCESS;
}

struct token * readCommand(int argc, char * argv[]){
    
    struct token * tokens;
    
    for(int i = 0; i < argc; i++) {
    
        tokens[i] = readToken(argv[i]);

    }



}




struct token readToken(char argv[]){
    
    struct token token;

    return token;

}

