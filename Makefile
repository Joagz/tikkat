


main: ./src/main.c
	gcc ./src/main.c -o ./exec/main.o -L ./libs/sqlite/ -lsqlite3 
