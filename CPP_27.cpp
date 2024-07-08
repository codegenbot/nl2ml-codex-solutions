```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string filp_case(const std::string& str){
    std::string result;
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            result += (char)std::toupper((unsigned char)str[i]);
        } else {
            result += (char)std::tolower((unsigned char)str[i]);
        }
    }
    return result;
}

int main() {
    std::cout << filp_case("Hello, world!") << std::endl;
    return 0;
}