string middleCharacter(string s) {
    int len = s.length();
    if (len % 2 == 0) {
        return s.substr(len/2 - 1, 2);
    } else {
        return s.substr(len/2, 1);
    }
}
int main() {
    string s;
    cin >> s;
    cout << middleCharacter(s);
    return 0;
}