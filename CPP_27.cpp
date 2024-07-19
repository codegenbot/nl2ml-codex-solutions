#include <string>
#include <cctype>
#include <iostream>
#include <cassert>

std::string flip_case(std::string str) {
    for (char &c : str) {
        if (std::islower(c)) {
            c = std::toupper(c);
        } else if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }
    return str;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "THESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}