#include <stdio.h>
#include <stdlib.h>

#include "../libs/std.h"

struct token {
    char * value;
    int type;
};

struct token * readCommand(int argc, char * argv[]);

int main(int argc, char *argv[])
{

    return EXIT_SUCCESS;
}

struct token * readCommand(int argc, char * argv[]){
    
    struct token * tokens;
    
    for(int i = 0; i < argc; i++) {
    
        if(argv[i] == ""){
        
        }

    }



}



