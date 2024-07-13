string spinWords(const string &str) {
    string result = "";
    string word = "";
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;
    return result;
}
int main() {
    string str;
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}