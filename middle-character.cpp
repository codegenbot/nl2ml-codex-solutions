```cpp
#include <string>
#include <iostream>

int main() {
    std::string s;
    std::cin >> s;

    std::cout << middleCharacter(s) << std::endl;

    return 0;
}

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len % 2 == 0) {
        return s.substr(len/2-1, 2);
    } else {
        return s.substr(len/2, 1);
    }
}