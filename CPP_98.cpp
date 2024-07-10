#include <string>

int count_upper(std::string s){
    int count = 0;
    std::string vowels = "AEIOU";
    for(int i = 0; i < s.length(); i += 2){
        if(isupper(s[i]) && vowels.find(s[i]) != std::string::npos){
            count++;
        }
    }
    return count;
}