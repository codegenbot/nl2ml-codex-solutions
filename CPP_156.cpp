#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

string int_to_mini_roman(int number) {
    string roman = "";
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> symbols = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

    for (int i = 0; i < values.size(); i++) {
        while (number >= values[i]) {
            number -= values[i];
            roman += symbols[i];
        }
    }

    return roman;
}

int main() {
    assert(int_to_mini_roman(1000) == "m");
    return 0;
}