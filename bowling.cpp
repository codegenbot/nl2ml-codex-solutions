#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;
    
    for (int i = 0; i < bowls.length(); i++) {
        char bowl = bowls[i];
        
        if (frame > 10) {
            break;
        }
        
        if (bowl == 'X') {
            score += 10;
            
            if (frame < 10) {
                score += (bowls[i+1] == 'X') ? 10 : (isdigit(bowls[i+1]) ? bowls[i+1] - '0' : 10);
                score += (bowls[i+2] == 'X') ? 10 : (isdigit(bowls[i+2]) ? bowls[i+2] - '0' : 10);
            }
            
            frame++;
            bowlIndex++;
        } else if (bowl == '/') {
            score += 10 - (bowls[i-1] - '0');
            score += (isdigit(bowls[i+1]) ? bowls[i+1] - '0' : 10);
            
            frame++;
            bowlIndex++;
        } else if (isdigit(bowl)) {
            score += bowl - '0';
            
            if (frame < 10 && bowlIndex % 2 == 1 && bowls[i-1] != '/') {
                score += (bowls[i-1] == 'X') ? 10 : (isdigit(bowls[i-1]) ? bowls[i-1] - '0' : 10);
            }
            
            bowlIndex++;
            
            if (bowlIndex % 2 == 0) {
                frame++;
            }
        }
    }
    
    return score;
}

int main() {
    std::string bowls;
    std::getline(std::cin, bowls);
    
    int score = calculateScore(bowls);
    std::cout << score << std::endl;
    
    return 0;
}