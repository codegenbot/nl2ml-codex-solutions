string middleCharacter(string s) {
    int n = s.length();
    if (n % 2 == 0) {
        return string(1, s[n/2 - 1]) + s[n/2];
    } else {
        return string(1, s[n/2]);
    }
}

int main() {
    string s;
    cin >> s;
    cout << middleCharacter(s) << endl;
    return 0;
}