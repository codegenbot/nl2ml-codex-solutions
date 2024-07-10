```cpp
#include <vector>
#include <string>
#include <cctype>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> result;
    bool inWord = false;
    std::string word = "";

    for (char c : txt) {
        if (!inWord && !std::isalnum(c)) {
            // Check for commas
            if (c == ',') {
                continue;
            }
            inWord = true;
        } else if (inWord && !std::isalnum(c)) {
            result.push_back(word);
            word = "";
            inWord = false;
        } else {
            word += c;
        }
    }

    if (inWord) {
        result.push_back(word);
    }
    return result;
}

int main() {
    assert(issame(split_words(""), {"0"}));
}