bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // Check for empty string
    char lastChar = txt.back(); 
    if(isalpha(lastChar) && !isalnum(lastChar)) return true;
    return false;
}