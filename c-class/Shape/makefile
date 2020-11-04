.PHONY: clean
all: main.o src/shape.o
	gcc main.o src/shape.o -o bin/shape
main.o:
	gcc -I./include/ -c main.c
src/shape.o:
	gcc -I./include/ -c src/shape.c -o src/shape.o
clean:
	rm main.o src/shape.o bin/shape 
