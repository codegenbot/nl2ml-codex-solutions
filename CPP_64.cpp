Here is the completed code:

int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && find(s.rbegin(), s.rend(), c) == s.rend())) {
            count++;
        }
    }
    return count;
}