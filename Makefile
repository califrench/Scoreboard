scoreboard: scoreboard.o main.o
	g++ -g scoreboard.cpp main.cpp -o scoreboard
scoreboard.o: scoreboard.h scoreboard.cpp
	g++ -c scoreboard.cpp
main.o: main.cpp
	g++ -c main.cpp
