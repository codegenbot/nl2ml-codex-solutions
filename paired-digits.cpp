int pairedDigits(const std::string& str) {
    int sum = 0;
    for (int i = 0; i < str.size() - 1; ++i) { 
        if ((str[i] - '0') == (str[i + 1] - '0')) { 
            sum += (str[i] - '0') + (str[i + 1] - '0');
        }
    }
    return sum;
}