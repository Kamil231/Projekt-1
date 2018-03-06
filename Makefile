
CC=g++
CFLAGS=-c -Wall

output: main.o person.o
	$(CC) main.o person.o -o output

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

person.o: person.cpp person.h
	$(CC) $(CFLAGS) person.cpp

clean: 
	rm *.o output
	
