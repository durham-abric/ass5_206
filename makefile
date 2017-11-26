ass5: main.o list.o
	gcc -o ass5 main.o list.o
main.o: main.c list.h
	gcc -c main.c list.h
list.o: list.c list.h  
	gcc -c list.c list.h
