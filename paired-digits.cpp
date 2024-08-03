#include <vector>
#include <iostream>
#include <string>

int pairedDigitsSum(const std::string& s) {
    int sum = 0;
    for (size_t i = 0; i < s.size() - 1; ++i) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}

int main() {
    std::string s;
    std::cout << "Enter a string of digits: ";
    std::cin >> s;
    int result = pairedDigitsSum(s);
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}