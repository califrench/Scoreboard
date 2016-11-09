/**
 * scoreboard.cpp
 *
 * The implementation of the scoreboard.h interface
 */
#include "Scoreboard.h"

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
