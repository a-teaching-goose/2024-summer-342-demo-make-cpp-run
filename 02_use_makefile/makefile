CC=g++
FLAG=-Wall -std=c++11 
EXE=my_executable

all: $(EXE) 

sorter.o: sorter.cpp sorter.hpp
	$(CC) $(FLAG) -c sorter.cpp -o sorter.o

hello_world.o: hello_world.cpp 
	$(CC) $(FLAG) -c hello_world.cpp -o hello_world.o

$(EXE): hello_world.o sorter.o
	$(CC) $(FLAG) hello_world.o sorter.o -o $(EXE) 

clean:
	rm $(EXE) *.o
