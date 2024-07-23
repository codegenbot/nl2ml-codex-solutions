#include <string>
#include <cctype>

std::string remove_vowels(std::string text){
    std::string result = "";
    for(char c : text){
        if(!std::isalpha(c) || !std::strchr("aeiouAEIOU", std::tolower(c))){
            result += c;
        }
    }
    return result;
}