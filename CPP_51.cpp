string remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
           (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
            result += c;
        }
    }
    return result;
}