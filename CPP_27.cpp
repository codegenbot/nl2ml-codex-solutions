```cpp
#include <iostream>
#include <string>

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            result += (c - ('a' - 'A'));
        else if(c >= 'A' && c <= 'Z')
            result += (c - ('A' - 'a'));
        else
            result += c;
    }
    return result;
}

int main(){
    std::cout << flip_case("These violent delights have violent ends") << std::endl;
    return 0;
}