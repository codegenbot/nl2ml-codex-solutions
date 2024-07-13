int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') &&
            !islower(c)) {
            continue;
        }
        if (c == 'y' && s.length() - 1 == find(s.rbegin(), s.rend(), c).distance(s.rbegin())) {
            continue;
        }
        count++;
    }
    return count;
}