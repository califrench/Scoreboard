/**
 * scoreboard.cpp
 *
 * The implementation of the scoreboard.h interface
 */
#include"scoreboard.h"

void Scoreboard::clearScoreboard() {
   for(unsigned int i = 0; i < scores.size(); ++i) {
      for(unsigned int j = 0; j < scores[i].size(); ++j) {
         scores[i][j] = 0;
      }
   }
}
