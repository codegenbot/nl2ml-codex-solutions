bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    char last_char = txt.back();
    return !isalnum(last_char);
}