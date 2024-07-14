```cpp
#include <iostream>

int mastermind(const char* code, const char* guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i]) {
                count++;
            }
        }
        if (count > 1) {
            white += count - 1;
        }
        else if (count == 1) {
            black--;
        }
    }

    return black + white;
}

int main() {
    const char* code = "ABCD";
    const char* guess = "ABDE";
    int result = mastermind(code, guess);
    std::cout << result;
    return 0;
}