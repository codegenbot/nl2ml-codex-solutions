string remove_vowels(string text){
    string result;
    for(char c : text){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' 
           && tolower(c) < 'a' || tolower(c) > 'z'){
            result += c;
        }
    }
    return result;
}