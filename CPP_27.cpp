#include <string>
#include <cassert>
#include <cctype>

std::string flip_case(std::string str){
    for(char &c : str){
        if(islower(c)){
            c = toupper(c);
        } else if(isupper(c)){
            c = tolower(c);
        }
    }
    return str;
}

int main() {
    std::string input;
    std::cin >> input;
    input = flip_case(input);
    std::cout << input << std::endl;
    return 0;
}