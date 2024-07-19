#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    vector<string> result;
    string word = "";
    
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        result.push_back(word);
    }
    
    if (result.size() == 1) {
        int count = 0;
        for (char c : result[0]) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }
        result[0] = to_string(count);
    }
    
    return result;
}