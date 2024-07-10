#include <string>
#include <iostream>

bool is_nested(std::string str) {
    int count = 0;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '[') {
            count++;
        } else if (str[i] == ']') {
            if (count > 0) {
                count--;
            } else {
                return false;
            }
        }
    }
    return count > 0;

}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str); 
    if (is_nested(str)) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }
    return 0;
}