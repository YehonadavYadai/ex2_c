MAIN_O = main.o
OTHER_O = mybank.o
C = gcc -g -fPIC
all: final
final: $(MAIN_O) libmyBank.so
	$(C) $(MAIN_O) -o $@ ./libmyBank.so
libmyBank.so: $(OTHER_O)
	$(C) -shared -o $@ $^

main.o: main.c mybank.h 
	$(C) -c main.c
mybank.o: mybank.c mybank.h
	$(C) -c mybank.c

.PHONY: clean all
    
clean:
	-rm *.o *.so final