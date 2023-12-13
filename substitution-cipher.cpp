```cpp
#include <iostream>
#include <string>

std::string decipherMessage(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage = "";
    for (char c : message) {
        int index = cipher2.find(c);
        decipheredMessage += cipher1[index - cipher2[0]];
    }
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << decipherMessage(cipher1, cipher2, message) << std::endl;
    return 0;
}
```