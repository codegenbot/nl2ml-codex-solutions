vector<string> select_words(string s, int n);
bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonant_count = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if (isalpha(c)) {
            char lc = tolower(c);
            if (lc != 'a' && lc != 'e' && lc != 'i' && lc != 'o' && lc != 'u') {
                consonant_count++;
            }
            word += c;
        }
    }

    if (consonant_count == n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    // Your implementation here
    return 0;
}