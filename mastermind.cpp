#include <string>
#include <algorithm>

std::tuple<int, int> mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else if (std::count(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
        }
    }

    return std::make_tuple(black, white);
}

int main() {
    std::string code = "XXXX"; 
    std::string guess = "XXXX"; 

    auto [black, white] = mastermind(code, guess);

    return 0;
}