int main() {
    string s;
    cin >> s;
    if (s.size() % 2 == 0) {
        cout << s.substr(s.size() / 2 - 1, 2) << endl;
    } else {
        cout << s.substr(s.size() / 2, 1) << endl;
    }
    return 0;
}