.PHONY: all clean install uninstall

OBJ      = build/src/BullsCows.o build/src/main.o 
LINKOBJ  = build/src/BullsCows.o build/src/main.o 
FLAG = -Wall -Werror
all : bin/bac

test : bin/main-test

clean: 
	rm -rf $(BIN) build/src/*.o  
clean_test: 
	rm -rf $(BIN) build/test/*.o 
	rm -rf $(BIN) build/test/*.d  

bin/bac: $(OBJ)
	gcc -std=c99 $(LINKOBJ) -o bin/bac

build/src/BullsCows.o: src/BullsCows.c  
	gcc $(FLAG)  -std=c99 -c src/BullsCows.c -o build/src/BullsCows.o 

build/src/main.o: src/main.c
	gcc $(FLAG)   -std=c99  -c src/main.c -o build/src/main.o 
	
-include build_test/*.d

bin/main-test: build/test/BullsCows.o build/test/test.o build/test/main.o
	gcc  -std=c99 build/test/BullsCows.o build/test/main.o build/test/test.o -o bin/main-test

build/test/BullsCows.o: src/BullsCows.c  
	gcc $(FLAG)   -I thirdparty -I src -std=c99 -c src/BullsCows.c -MMD  -o build/test/BullsCows.o 
build/test/main.o: test/main.c
	gcc $(FLAG)    -I thirdparty -I src -std=c99  -c test/main.c -MMD  -o build/test/main.o 
build/test/test.o: test/test.c
	gcc $(FLAG)   -I thirdparty -I src -std=c99 -MMD  -c test/test.c -o build/test/test.o

