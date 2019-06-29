CXX      = g++
CXXFLAGS = -std=c++11 -Wall

all: demo demo2

demo: demo.o
	$(CXX) -o $@ demo.o

demo2: demo2.o
	$(CXX) -o $@ demo2.o

demo.o: demo.cpp ConfigParser.hpp
	$(CXX) $(CXXFLAGS) -c $<

demo2.o: demo2.cpp ConfigParser.hpp
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	/bin/rm -f *.o demo demo2
