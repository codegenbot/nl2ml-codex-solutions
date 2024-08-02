#include <iostream>
#include <cassert>

std::string flip_case(const std::string& input_string) {
    std::string result;
    for(char c : input_string) {
        if(std::isupper(c)) {
            result += std::tolower(c);
        } else if(std::islower(c)) {
            result += std::toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}