CC     = g++
CFLAGS = -std=c++11 -Wall

all: demo demo2

demo: demo.o ConfigParser.o
	$(CC) -o demo demo.o ConfigParser.o

demo2: demo2.o ConfigParser.o
	$(CC) -o demo2 demo2.o ConfigParser.o

ConfigParser.o: ConfigParser.cpp ConfigParser.h
	$(CC) -c ConfigParser.cpp $(CFLAGS)

demo.o: demo.cpp ConfigParser.cpp ConfigParser.h
	$(CC) -c demo.cpp $(CFLAGS)

demo2.o: demo2.cpp ConfigParser.cpp ConfigParser.h
	$(CC) -c demo2.cpp $(CFLAGS)

.PHONY: clean
clean:
	/bin/rm -f *.o demo demo2
