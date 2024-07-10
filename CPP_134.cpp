bool check_if_last_char_is_a_letter(const std::string& txt) {
    if (txt.empty()) return false;
    char last_char = txt.back();
    if (isalpha(last_char) && txt.find_last_of(" ") == txt.size() - 1) return true;
    return false;
}