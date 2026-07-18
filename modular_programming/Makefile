CFLAGS = -Wno-implicit-function-declaration #for more common parameter during compilation 

all: final

final: main.o student.o
	@echo "Linking and producing the final program"
	gcc $(CFLAGS) main.o student.o -o final

main.o: main.c 
	@echo "Compiling the main.c file"
	gcc $(CFLAGS) -c main.c

student.o: student.c 
	@echo "Compiling the student.c file"
	gcc $(CFLAGS) -c student.c

clean: 
	@echo "Removing everything except the source files"
	rm main.o student.o final

