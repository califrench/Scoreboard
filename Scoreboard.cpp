/**
 * scoreboard.cpp
 *
 * The implementation of the scoreboard.h interface
 */

#include "Scoreboard.h"


/**
 * Initializes a scoreboard with the specified dimensions
 * 
 * @param  competitors the number of competitors
 * @param  periods the number of periods
 * @return the scoreboard
 */
Scoreboard::Scoreboard(int competitors, int periods){
    scores = vector<vector<int> >(competitors, vector<int>(periods, 0));
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

    if (competitor < 0 || period < 0 || (unsigned int)competitor >= scores.size() ||
     (unsigned int)period >= scores[competitor].size()) {
        return;
    }

    
    scores[competitor][period] = score;
    notifyObservers();
}


/**
 * Gets the score for a given competitor and period
 * @param  competitor the competitor to get the score for
 * @param  period the period to get the score for
 * @return the score
 */
int Scoreboard::getScore(int competitor, int period) {
    competitor--;
    period--;   
    if (competitor >= 0 && (unsigned int)competitor < scores.size() && period >= 0 &&
     (unsigned int)period < scores[competitor].size()) {
        return scores[competitor][period];
    }
    return INT_MIN;
}

/**
 * Gets the total score for the competitor over all periods
 * @param  competitor the competitor to get the total score for
 * @return the total score
 */
int Scoreboard::getTotalScore(int competitor) {
    int totalScore = 0;

    if (competitor < 1 || (unsigned int)competitor > scores.size()) {
        return INT_MIN; //out of range
    }

    for (unsigned int i = 1; i <= scores[competitor].size(); ++i) {
        totalScore += getScore(competitor, i);
    }

    return totalScore;
}


/**
 * Clears the scroeboard of all scores
 */
void Scoreboard::clearScoreboard() {
    for (unsigned int i = 0; i < scores.size(); ++i) {
        for (unsigned int j = 0; j < scores[i].size(); ++j) {
            scores[i][j] = 0;
        }
    }
    notifyObservers();
}
