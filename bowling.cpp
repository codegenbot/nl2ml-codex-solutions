#include <iostream>
#include <string>
using namespace std;

int calculateScore(const string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;
    
    while (frame <= 10 && bowlIndex < bowls.size()) {
        char bowl = bowls[bowlIndex];
        
        if (bowl == 'X') {
            score += 10;
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 1]) ? bowls[bowlIndex + 1] - '0' : 10);
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 2]) ? bowls[bowlIndex + 2] - '0' : 10);
            bowlIndex++;
        } else if (bowl == '/') {
            score += 10 - (isdigit(bowls[bowlIndex - 1]) ? bowls[bowlIndex - 1] - '0' : 0);
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 1]) ? bowls[bowlIndex + 1] - '0' : 10);
        } else {
            score += (isdigit(bowl) ? bowl - '0' : 0);
        }
        
        if (bowl != 'X') {
            frame++;
        }
        
        bowlIndex++;
    }
    
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << calculateScore(bowls) << endl;
    return 0;
}