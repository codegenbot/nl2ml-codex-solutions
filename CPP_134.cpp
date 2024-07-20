bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    char lastChar = txt.back();
    bool isLetter = (lastChar >= 'a' && lastChar <= 'z') || (lastChar >= 'A' && lastChar <= 'Z');
    int i = 0;
    while(i < txt.length() - 1) {
        if(txt[i] == ' ') break;
        i++;
    }
    return isLetter && (i == txt.length()-1);
}