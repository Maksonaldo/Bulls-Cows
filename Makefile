all: build bin bin/main

clean:

	-rm -f bin/main build/*.o

bin/main: build/main.o build/BullsCows.o

	gcc -Wall -Werror build/main.o build/BullsCows.o -o bin/main -lm

build/main.o: src/main.c

	gcc -Wall -Werror -c src/main.c -o build/main.o

build/BullsCows.o: src/BullsCows.c

	gcc -Wall -Werror -c src/BullsCows.c -o build/BullsCows.o



bin:
	mkdir bin
build:
	mkdir build

.PHONY: clean
