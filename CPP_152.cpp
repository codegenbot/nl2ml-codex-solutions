#include <vector>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
  vector<int> difference;
  
  for (int i = 0; i < game.size(); i++) {
    difference.push_back(abs(game[i] - guess[i]));
  }

  return difference;
}