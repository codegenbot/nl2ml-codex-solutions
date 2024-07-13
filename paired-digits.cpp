```
#include <string>
#include <iostream>

int pairedDigits(std::string s);

int main() {
    std::string s;
    std::cin >> s; 
    int sum = pairedDigits(s);
    std::cout << "The sum of the digits whose following digit is the same is: " << sum << std::endl;
    return 0;
}

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}