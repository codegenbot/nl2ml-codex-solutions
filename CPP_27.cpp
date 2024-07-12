```cpp
#include <cassert>
#include <cctype>
#include <string>

std::string filp_case(const std::string& str){
    std::string result = str;
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(std::islower(c))
            result[i] = std::toupper(c);
        else if(std::isupper(c))
            result[i] = std::tolower(c);
    }
    return result;
}

int main(){
    assert(flip_case("These violent delights have violent ends") == "tHEse ViOLEnt DeLiGhTs HaVe ViOLEnT EnDs");
    return 0;
}