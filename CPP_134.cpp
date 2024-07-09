bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    int len = txt.length();
    char lastChar = txt[len-1];
    if(!isalpha(lastChar)) return false;
    for(int i=0; i<len-1; i++){
        if(!isspace(txt[i]) && !isalpha(txt[i])){
            return true;
        }
    }
    return false;
}