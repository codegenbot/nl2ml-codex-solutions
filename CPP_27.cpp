#include <iostream>
#include <string>
#include <cassert>

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            result += toupper(str[i]);
        } else {
            result += tolower(str[i]);
        }
    }
    return result;
}

int initial_main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    std::cout << flip_case("Hello, world!") << std::endl;
    return 0;
}