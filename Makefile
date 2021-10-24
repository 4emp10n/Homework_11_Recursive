CC = g++

SOURCES = main.cpp MaxInt.cpp

all:
	$(CC) $(SOURCES) -o main

run:
	@./main

clean:
	@rm -rf *.o main