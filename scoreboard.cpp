/**
 * scoreboard.cpp
 *
 * The implementation of the scoreboard.h interface
 */


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
void scoreboard::setScore(int competitor, int period, int score) {
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

