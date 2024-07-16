int pairedDigits(const std::string& str) {
    int sum = 0;
    for (size_t i = 0; i < str.length() - 1; ++i) {
        if (str[i] == str[i + 1]) {
            sum += str[i] - '0';
        }
        if (i == str.length() - 2 && str[i] == str[i + 1]) {
            sum += str[i + 1] - '0';
        }
    }
    return sum;
}