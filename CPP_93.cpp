string encode(string message) {
    for (char &c : message) {
        if (isalpha(c)) {
            if (isupper(c)) c = tolower(c);
            else c = toupper(c);
        }
        if (c == 'a' || c == 'A') c = 'C';
        else if (c == 'e' || c == 'E') c = 'G';
        else if (c == 'i' || c == 'I') c = 'K';
        else if (c == 'o' || c == 'O') c = 'Q';
        else if (c == 'u' || c == 'U') c = 'W';
    }
    return message;
}