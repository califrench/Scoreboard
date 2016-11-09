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

//Taylor, Forrest
int Scoreboard::getScore(int competitor, int period, int score)
{
   if (competitor <= competitor_size && period <= period_size)
   {
      score = scores[competitor][period];
      return score;
   }

   else
      return -1;
}
