```cpp
int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i < s.size() - 1 && (s[i] - '0') == (s[i+1] - '0')) {
            sum += s[i] - '0';
        }
    }
    return sum;
}