int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        switch (tolower(c)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                if (c == 'y' && s.size() - 1 == s.find(c))
                    continue; // 'y' is not a vowel in this position
                count++;
                break;
        }
    }
    return count;
}