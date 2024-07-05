string encode(string message){
    string result = "";
    for (char c : message) {
        // Swap case
        if (islower(c)) c = toupper(c);
        else c = tolower(c);

        // Replace vowels
        if (c == 'A') c = 'C';
        else if (c == 'E') c = 'G';
        else if (c == 'I') c = 'K';
        else if (c == 'O') c = 'Q';
        else if (c == 'U') c = 'W';
        else if (c == 'a') c = 'c';
        else if (c == 'e') c = 'g';
        else if (c == 'i') c = 'k';
        else if (c == 'o') c = 'q';
        else if (c == 'u') c = 'w';

        result += c;
    }
    return result;
}