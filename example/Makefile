CXX=g++
CXX_FLAGS=-I../include/ -Wall -fPIC -Wextra -std=c++11


.phony: all clean

# Come back and define default target.
all : object loader

object:	
	$(CXX) -c $(CXX_FLAGS) -o ObjectBase.o ObjectBase.cpp
	$(CXX) -c $(CXX_FLAGS) -o MyObject.o MyObject.cpp
	$(CXX) -shared -o MyObject.bin ObjectBase.o MyObject.o
	rm -f MyObject.o ObjectBase.o
	
loader:
	$(CXX) -c $(CXX_FLAGS) -o ObjectBase.o ObjectBase.cpp
	$(CXX) -c $(CXX_FLAGS) -o loader.o loader.cpp
	$(CXX) -o loader.exe ObjectBase.o loader.o -ldl
	rm -f loader.o ObjectBase.o
	
clean:
	rm -f *.o
	rm -f *.bin
	rm -f *.exe