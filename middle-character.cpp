std::string middleCharacter(const std::string& str) {
    int length = str.length();
    if (length % 2 == 0) {
        return str.substr((length / 2) - 1, 2);
    } else {
        return str.substr(length / 2, 1);
    }
}