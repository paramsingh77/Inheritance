all: program

program: main.o Bowler.o JuniorBowler.o
	g++ main.o Bowler.o JuniorBowler.o -o Program

main.o: main.cpp
	g++ -c main.cpp

Bowler.o: Bowler.cpp
	g++ -c Bowler.cpp

JuniorBowler.o: JuniorBowler.cpp
	g++ -c JuniorBowler.cpp

clean:
	rm -rf *.o program
