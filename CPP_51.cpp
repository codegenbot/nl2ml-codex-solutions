string remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
           || (c >= 'A' && c <= 'U') && (c >= 'a' && c <= 'u')){
            continue;
        }
        result += c;
    }
    return result;
}