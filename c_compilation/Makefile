CC = gcc

all: final

final: main.o add.o
	@echo "Compiling final executable"
	$(CC) main.o add.o -o final

main.o: main.c
	@echo "Compiling main.c file into main.o"
	$(CC) -c main.c

add.o: add.c
	@echo "Compiling add.c file into add.o"
	$(CC) -c add.c

clean:
	@echo "Removing all the files except source files"
	rm add.o main.o final