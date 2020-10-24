all: pointers.o
	gcc -o test pointers.o

pointers.o: pointers.c
	gcc -c pointers.c
	
run:
	./test