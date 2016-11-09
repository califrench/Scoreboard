G = g++
FLAGS = -g -std=c++11 -Wall -W -Werror -pedantic

scoreboard: scoreboard.o 
	$(G) $(FLAGS) -o scoreboard.out scoreboard.o

scoreboard.o: scoreboard.cpp scoreboard.h IScoreboard.h

clean:
	rm -f *.o scoreboard.out