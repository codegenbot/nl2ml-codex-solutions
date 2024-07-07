#include <iostream>
#include <string>

int vowels_count(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && s.find('y') == s.size() - 1)) {
            count++;
        }
    }
    return count;

int main() {
    std::cout << vowels_count(std::string("ACEDY")) << std::endl;
}