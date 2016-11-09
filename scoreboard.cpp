/**
 * scoreboard.cpp
 *
 * The implementation of the scoreboard.h interface
 */

int getTotalScore(int competitor) {
  int totalScore = 0;

  if (competitor < 1 || competitor > scores.size())
    return 0; //out of range

  for (int i = 1; i <= scores[competitor].size(); ++i)
  {
    totalScore += getScore(competitor, i);
  }

  return totalScore;
}