string middleCharacter(string s) {
    int n = s.size();
    if (n % 2 == 0) {
        return s.substr((n / 2) - 1, 2);
    } else {
        return s.substr(n / 2, 1);
    }
}