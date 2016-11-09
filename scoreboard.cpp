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


/**
 * Sets the score for a given competition and a given period
 *
 * If the given competitor or period is negative, then no changes take effect
 * If the given competitor or period is greater than the current board size
 * the size of the scoreboard is increased to address this new score
 * 
 * @param competitor the competitor to set the score for
 * @param period the period to set the score for
 * @param score the score to set
 */
void Scoreboard::setScore(int competitor, int period, int score) {
    competitor--;
    period--;

    if (competitor < 0 || period < 0) {
        return;
    }

    if (competitor >= scores.size()) {
        for (int i = scores.size(); i < competitor; i++) {
            scores.push_back(vector<int>);
        }
    }

    if (period >= scores[competitor].size()) {
        for (int i = scores[competitor].size(); i < period) {
            scores[competitor].push_back(0);
        }
    }

    scores[competitor][period] = score;
}


/**
 * Gets the score for a given competitor and period
 * @param  competitor the competitor to get the score for
 * @param  period the period to get the score for
 * @return the score
 */
int Scoreboard::getScore(int competitor, int period)
{
   if (competitor <= competitor_size && period <= period_size)
   {
      return scores[competitor][period];
   }

   else
      return -1;
}

/**
 * Gets the total score for the competitor over all periods
 * @param  competitor the competitor to get the total score for
 * @return the total score
 */
int Scoreboard::getTotalScore(int competitor) {
  int totalScore = 0;

  if (competitor < 1 || competitor > scores.size())
    return 0; //out of range

  for (int i = 1; i <= scores[competitor].size(); ++i)
  {
    totalScore += getScore(competitor, i);
  }

  return totalScore;
}
