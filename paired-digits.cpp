#include <string>
#include <iostream>

int pairedDigits(const std::string& str) {
    int sum = 0;
    for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] == str[i + 1]) {
            sum += str[i] - '0';
        }
    }
    return sum;
}

int main() {
    std::cout << pairedDigits("your_string") << std::endl;
    return 0;
}