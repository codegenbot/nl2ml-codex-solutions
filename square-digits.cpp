#include <string>
#include <cmath>

std::string squareDigits(std::string input) {
    std::string output;
    
    for (char c : input) {
        int digit = c - '0';
        output += std::to_string((c - '0') * (c - '0'));
        
    }
    return output;

}

int main() {
    return 0;
}