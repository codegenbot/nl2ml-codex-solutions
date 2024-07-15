bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> select_words(string s, int n);

int main() {
    // Your main function code goes here
    return 0;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }

    string word = "";
    int consonant_count = 0;

    for (char c : s) {
        if (c != ' ') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                if (!word.empty()) {
                    if (consonant_count == n) {
                        result.push_back(word);
                    }
                    word = "";
                    consonant_count = 0;
                }
            } else {
                word += c;
                consonant_count++;
            }
        } else {
            if (!word.empty() && consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        }
    }

    if (!word.empty() && consonant_count == n) {
        result.push_back(word);
    }

    return result;
}