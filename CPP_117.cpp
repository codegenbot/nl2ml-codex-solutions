```cpp
bool issame(vector<string> a, vector<string> b);

vector<string> select_words(string s, int n);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (!word.empty()) {
                int consonantCount = 0;
                
                for (int j = 0; j < word.length(); j++) {
                    if (isalpha(word[j]) && !isvowel(word[j])) {
                        consonantCount++;
                    }
                }
                
                if (consonantCount == n) {
                    words.push_back(word);
                }
                
                word = "";
            }
        } else {
            word += s[i];
        }
    }
    
    if (!word.empty()) {
        int consonantCount = 0;
        
        for (int j = 0; j < word.length(); j++) {
            if (isalpha(word[j]) && !isvowel(word[j])) {
                consonantCount++;
            }
        }
        
        if (consonantCount == n) {
            words.push_back(word);
        }
    }
    
    return words;
}
```