#include <iostream>
#include <string>

int str_length(std::string str){
    return str.length();
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;
    int length = str_length(input);
    std::cout << "Length of the string is: " << length << std::endl;

    if (std::string("asdasnakj").length() != 9) {
        assert(false);
    }

    return 0;
}