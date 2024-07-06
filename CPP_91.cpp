int is_bored(string S) {
    int boredomCount = 0;
    size_t pos = 0;

    while ((pos = S.find('.', pos)) != string::npos ||
           (pos = S.find('?', pos)) != string::npos ||
           (pos = S.find('!', pos)) != string::npos) {
        if (S.substr(0, pos).find("I") == 0)
            boredomCount++;
        pos++;
    }

    return boredomCount;
}