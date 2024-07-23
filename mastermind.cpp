#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count the number of black pegs (correct color and correct place)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count the number of white pegs (correct color, wrong place)
    for (char c : code) {
        int count = std::count(std::begin(guess), std::end(guess), c);
        black -= count;
        white += count > 1 ? 0 : 1; 
    }

    return black + white;

}

int main() {
    std::string code = "abcd";
    std::string guess = "abde"; // adjust these values as needed
    int result = mastermind(code, guess);
    return 0;
}