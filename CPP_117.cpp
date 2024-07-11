vector<string> select_words(string s, int n);

int main() {
    assert(select_words("a b c d e f", 1) == vector<string>{"b", "c", "d", "f"});
    return 0;
}

int issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return 0;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonantCount = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                consonantCount++;
            }
            word += c;
        }
    }

    if (consonantCount == n) {
        result.push_back(word);
    }

    return result;
}