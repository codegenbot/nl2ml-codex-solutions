bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int last_index = txt.length() - 1;
    char last_char = txt.at(last_index);
    return isalpha(last_char) && !isalnum(last_char);
}