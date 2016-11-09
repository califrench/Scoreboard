/**
 * scoreboard.h
 *
 * The header for a subclass of the scoreboard.h interface
 */

#include <vector>
#include "IScoreboard.h"

using namespace std;

#ifndef SCOREBOARD_H
#define SCOREBOARD_H

class Scoreboard : public IScoreboard
{
  public:
    /*
     * void setScore(int,int,int)
     *  Sets the score for one competitor for a given period. Out of range
     *  values should result in no changes in the scoreboard.
     */
    void setScore(int competitor, int period, int score);
    
    /*
     * void getScore(int,int)
     *  Returns the score for one competitor for a given period. Out of range
     *  values should return INT_MIN
     */
    int getScore(int competitor, int period);

    /*
     * int getTotalScore(int)
     *  Gets the sum of all periods for the given competitor. Out of range
     *  values should return 0
     */
    int getTotalScore(int competitor);

    /*
     * void clearScoreboard()
     *  Resets a scoreboard to have scores of 0 for every competitor in
     *  every period
     */
    void clearScoreboard();
  private:
    vector<vector<int> >scores;
};
#endif /* SCOREBOARD_H */
