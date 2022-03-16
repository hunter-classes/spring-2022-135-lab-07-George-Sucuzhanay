main: main.o styling.o
	g++ -o main main.o styling.o

main.o: main.cpp styling.h
	g++ -c main.cpp

styling.o: styling.cpp styling.h
	g++ -c styling.cpp
	
clean: 
	rm -f main main.o styling.o