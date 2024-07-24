```cpp
#include <iostream>
#include <cctype>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for(int i = 1; i < s.length(); i += 2) {
        if(toupper(s[i-1]) == 'A' || toupper(s[i-1]) == 'E' || toupper(s[i-1]) == 'I' || toupper(s[i-1]) == 'O' || toupper(s[i-1]) == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    int result = count_upper(str);
    std::cout << "Number of vowels in the string is: " << result << std::endl;
    return 0;
}