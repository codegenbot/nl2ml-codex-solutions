int pairedDigits(string s) {
    int sum = 0;
    for (int i = 0; i <= s.length() - 1; i++) { 
        if ((i == s.length() - 1 || s[i] == s[i+1])) { 
            sum += s[i] - '0';
        }
    }
    return sum;
}