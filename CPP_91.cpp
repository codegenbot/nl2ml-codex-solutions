```cpp
#include <string>
#include <algorithm>
#include <iostream>

int is_bored(const std::string& S){
    int count = 0;
    size_t pos = 0;
    while (pos != S.size()) {
        if (S.substr(0, pos).compare("I") == 0) {
            count++;
            break;
        }
        pos++;
    }
    return count;

int main
{
    std::string input; 
    std::cout << "Enter a string: ";
    getline(std::cin, input); 
    int result = is_bored(input);
    std::cout << "Count of 'I' at the beginning: " << result << std::endl;
    return 0;
}