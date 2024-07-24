int main() {
    string txt;
    cin >> txt;
    cout << (check_if_last_char_is_a_letter(txt) ? "true" : "false");
    return 0;
}

bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0)
        return false;
    char lastChar = txt.back();
    bool isLetter = (lastChar >= 'a' && lastChar <= 'z') || (lastChar >= 'A' && lastChar <= 'Z');
    bool isPartOfWord = false;
    for(int i = 0; i < txt.length() - 1; i++){
        if(txt[i] != ' '){
            isPartOfWord = true;
            break;
        }
    }
    return isLetter && !isPartOfWord;
}