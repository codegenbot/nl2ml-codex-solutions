int count = 0;
    for (size_t i = 0; i <= str.length() - substring.length(); ++i) {
        if (str.substr(i, substring.length()) == substring) {
            count++;
        }
    }
    return count;
}