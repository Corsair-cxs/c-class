.PHONY: clean
all: main.o rect.o shape.o main.i librect.a
	gcc main.o -L./lib -lrect -o bin/rect

main.o: main.c include/rect.h include/shape.h
	gcc -I include -c main.c

main.i:
	gcc -I include -E main.c -o main.i

librect.a:
	ar -r lib/librect.a src/rect.o src/shape.o  

rect.o: src/rect.c include/rect.h include/shape.h
	gcc -I include/ -c src/rect.c -o src/rect.o

shape.o: src/shape.c include/rect.h include/shape.h
	gcc -I include/ -c src/shape.c -o src/shape.o

clean: main.c include/rect.h include/shape.h
	rm src/rect.o src/shape.o main.o bin/rect main.i lib/librect.a
