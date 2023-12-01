#include <string>
#include <vector>

std::string int_to_mini_romank(int number) {
    std::string roman;
    std::vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::vector<std::string> symbols = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

    for (int i = 0; i < values.size(); i++) {
        while (number >= values[i]) {
            roman += symbols[i];
            number -= values[i];
        }
    }

    return roman;
}