string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char encrypted = c + 2 * 2;
            if (islower(c) && encrypted > 'z') {
                encrypted = 'a' + (encrypted - 'z' - 1);
            } else if (isupper(c) && encrypted > 'Z') {
                encrypted = 'A' + (encrypted - 'Z' - 1);
            }
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}