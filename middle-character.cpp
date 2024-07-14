```cpp
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    int startMid = len / 2;
    int endMid = len / 2 + 1;

    if (len % 2 == 0) { 
        return std::string(1, s[startMid - 1]) + std::string(1, s[endMid - 1]);
    } else { 
        return std::string(1, s[len / 2]);
    }
}

int main() { std::cout << middleCharacter("your_test_string"); return 0; }