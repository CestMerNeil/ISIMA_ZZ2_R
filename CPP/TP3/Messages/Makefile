all: main

main: A.o B.o main.o
	g++ A.o B.o main.o -o main

A.o: A.cpp
	g++ -c A.cpp

B.o: B.cpp
	g++ -c B.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -rf *.o main