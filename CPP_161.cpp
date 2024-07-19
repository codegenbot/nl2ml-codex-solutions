#include <iostream>
#include <algorithm>
#include <string>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? std::string(s).reverse() : result;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    std::cout << solve(s) << std::endl;
    return 0;
}