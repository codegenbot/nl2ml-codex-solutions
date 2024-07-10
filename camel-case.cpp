```cpp
#include <vector>
#include <iostream>
#include <string>

std::string toCamelCase(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else if (c == ' ') {
            capitalize = true;
        } else {
            if(capitalize){
                result += tolower(c);
            }else{
                result += toupper(c);
            }
            capitalize = false;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    std::cout << "Camel case: " << toCamelCase(input) << std::endl;

    return 0;
}