#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int n = s.length();
    std::string result = "";
    if(n % 2 == 1) {
        result = s.substr(n / 2, 1);
    } else {
        result = s.substr(n / 2 - (n % 2 == 0), 1) + s.substr(n / 2);
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin.getline(&str, 1000);
    std::cout << middleCharacter(str) << std::endl;
    return 0;
}