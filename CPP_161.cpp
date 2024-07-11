#include <iostream>
#include <string>
#include <algorithm>

std::string solve(std::string s) {
    for(char& c : s){
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    if(count_if(s.begin(), s.end(), ::isalpha) == 0){
        reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << solve(input) << std::endl;
    return 0;
}