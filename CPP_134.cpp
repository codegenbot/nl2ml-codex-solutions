bool check_if_last_char_is_a_letter(const std::string& txt) {
    if (txt.empty()) return false;
    char last_char = txt.back();
    if (isalpha(last_char)) {
        if (txt.find_last_of(" ") == std::string::npos) return true;
    }
    return false;
}