#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string flip_case(std::string str) {
    for (char &c : str) {
        if (std::islower(c)) {
            c = std::toupper(c);
        } else if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }
    return str; // Return the modified string
}

int main() {
    std::string result = flip_case("tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    assert(result == "THESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    std::cout << result << std::endl; // Output the result
    return 0;
}