string squareDigits(string n) {
    string result = "";
    for(char c : n) {
        int digit = (int)(c - '0');
        result += to_string(digit * digit);
    }
    return result;
}