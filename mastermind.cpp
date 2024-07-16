Here's the modified code:
```cpp
#include <utility>
#include <algorithm>

std::pair<int, int> mastermind(const std::string& code, const std::string& guess) {
    std::string all_chars = "RGYBO"; // assuming the 6 possible characters are R, G, Y, B, and O

    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (guess[i] == code[i]) {
            black++;
        } else if (std::count(all_chars.begin(), all_chars.end(), guess[i]) > 0) {
            white++;
        }
    }

    return {white, black};
}