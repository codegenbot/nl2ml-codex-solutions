```
std::string remove_vowels(std::string text){
    std::string result = "";
    for(char c : text){
        if(!strchr("aeiouAEIOU", c)){
            result += c;
        }
    }
    return result;
}