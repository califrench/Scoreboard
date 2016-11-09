/**
 * scoreboard.cpp
 *
 * The implementation of the scoreboard.h interface
 */
#include "Scoreboard.h"

//Taylor, Forrest
int Scoreboard::getScore(int competitor, int period)
{
   if (competitor <= competitor_size && period <= period_size)
   {
      return scores[competitor][period];
   }

   else
      return -1;
}
