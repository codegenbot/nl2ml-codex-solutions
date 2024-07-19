```cpp
#include <iostream>
#include <string>

std::string intToMiniRoman(int n) {
    std::string roman;
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;
    while (n > 0) {
        if (n >= val[i]) {
            n -= val[i];
            roman += sym[i];
        } else {
            i++;
        }
    }
    return roman;
}

int main() {
    assert(intToMiniRoman(4) == "IV");
    std::cout << intToMiniRoman(1000) << std::endl;
    return 0;
}