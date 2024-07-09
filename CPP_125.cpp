#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> split_words(const std::string& txt) {
    std::vector<std::string> result;
    std::string word = "";
    
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
            if (islower(c) && ((c - 'a') % 2 == 1)) {
                count++;
            }
        }
        result[0] = std::to_string(count);
    }

    return result;
}

int main() {
    assert(issame(split_words(""), {"0}));
    
    // Add more test cases if needed

    return 0;
}