```cpp
#include <iostream>
#include <string>

std::string camelCase(std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            if(capitalize){
                result += toupper(str.substr(str.find(c)+1, 1));
                capitalize = false;
            }
            result += ' ';
        } else {
            if(capitalize){
                result += toupper(c);
                capitalize = false;
            }else{
                result += tolower(c);
            }
        }
    }

    return result;
}

int main() {
    std::string input = "camel-case example-test-string";
    std::cout << camelCase(input) << std::endl;
    return 0;
}