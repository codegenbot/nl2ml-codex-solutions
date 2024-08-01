#include <string>
#include <cctype>
#include <cassert>

std::string encode(std::string message) {
    for(char &c : message){
        if(std::isalpha(c)){
            c = std::islower(c) ? std::toupper(c) : std::tolower(c);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = c + 2;
            }
        }
    }
    return message;
}

int main() {
    assert(encode("Example") == "fXAmplE");
    assert(encode("xyz123") == "xYz123");

    return 0;
}