.PHONY: clean
all: main.o main.i circle.o rect.o shape.o libploy.a
	gcc main.o -L./lib -lploy -o bin/ploy

main.o: main.c include/circle.h include/rect.h include/shape.h 
	gcc -I include -c main.c

main.i:
	gcc -I include -E main.c -o main.i

libploy.a:
	ar -r lib/libploy.a src/circle.o src/rect.o src/shape.o 

circle.o: include/circle.h include/shape.h src/circle.c src/shape.c 
	gcc -I include -c src/circle.c -o src/circle.o

rect.o: include/rect.h include/shape.h src/rect.c src/shape.c 
	gcc -I include -c src/rect.c -o src/rect.o

shape.o: include/shape.h src/shape.c 
	gcc -I include -c src/shape.c -o src/shape.o 

clean:
	rm main.o src/circle.o src/rect.o src/shape.o bin/ploy lib/libploy.a main.i 
