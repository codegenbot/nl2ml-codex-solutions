int pairedDigits(const char* s) {
    int sum = 0;
    for (int i = 0; i < strlen(s) - 1; i++) {
        if ((s[i] - '0') == (s[i + 1] - '0')) {
            sum += s[i] - '0';
        }
    }
    return sum;

}