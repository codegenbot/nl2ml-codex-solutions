```cpp
#include <iostream>
#include <string>

std::string string_xor(std::string a, std::string b) {
    std::string result;
    for(int i=0; i<a.length(); i++) {
        if(a[i] == '0' && b[i] == '0')
            result += '0';
        else if(a[i] == '1' && b[i] == '1')
            result += '0';
        else
            result += a[i];
    }
    return result;
}

int main() {
    std::string a, b;
    std::cout << "Enter the first string: ";
    std::cin >> a;
    std::cout << "Enter the second string: ";
    std::cin >> b;
    std::cout << "XOR of two strings is: " << string_xor(a, b) << std::endl;
    return 0;
}