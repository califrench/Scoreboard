G = g++
FLAGS = -g -c -std=c++11 -Wall -W -Werror -pedantic

# This is useless since our object will be used in other programs
# scoreboard: scoreboard.o 
# 	$(G) $(FLAGS) -o scoreboard.out scoreboard.o

scoreboard.o: scoreboard.cpp scoreboard.h IScoreboard.h

clean:
	rm -f *.o scoreboard.out

