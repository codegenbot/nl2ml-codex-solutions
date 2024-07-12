#include <string>
#include <cassert>

std::string flip_case(std::string str){
    for(int i=0; i<str.length(); i++){
        if(std::islower(str[i])){
            str[i] = std::toupper(str[i]);
        } else if(std::isupper(str[i])){
            str[i] = std::tolower(str[i]);
        }
    }
    return str;
}

assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");