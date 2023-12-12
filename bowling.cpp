#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;
    
    while (frame <= 10 && bowlIndex < bowls.length()) {
        char bowl = bowls[bowlIndex];
        
        if (bowl == 'X') {
            score += 10;
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 1]) ? bowls[bowlIndex + 1] - '0' : 0);
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 2]) ? bowls[bowlIndex + 2] - '0' : 0);
            bowlIndex++;
        } else if (bowl == '/') {
            score += 10 - (isdigit(bowls[bowlIndex - 1]) ? bowls[bowlIndex - 1] - '0' : 0);
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 1]) ? bowls[bowlIndex + 1] - '0' : 0);
            bowlIndex++;
        } else if (isdigit(bowl)) {
            score += bowl - '0';
        }
        
        bowlIndex++;
        
        if (bowl == 'X' || bowlIndex % 2 == 0) {
            frame++;
        }
    }
    
    return score;
}

int main() {
    std::string bowls;
    std::cout << "Enter the individual bowls: ";
    std::cin >> bowls;
    
    int score = calculateScore(bowls);
    std::cout << "Score: " << score << std::endl;
    
    return 0;
}