#include <iostream>
#include <string>

int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') &&
            !isupper(c)) {
            count++;
        } else if (c == 'y' && s.back() == c) {
            count++;
        }
    }
    return count;
}

int main() {
    std::cout << vowels_count("ACEDY") << std::endl; // 3
    return 0;
}