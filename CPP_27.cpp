```cpp
#include <iostream>
#include <string>

std::string filp_case(const std::string& str){
    std::string result = str;
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            result[i] = toupper((char)str[i]);
        } else {
            result[i] = tolower((char)str[i]);
        }
    }
    return result;
}

int main() {
    std::cout << filp_case("Hello, world!") << std::endl;
    return 0;
}