#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
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

std::vector<std::string> words_string(std::string s) {
    std::vector<std::string> result;
    std::string word = "";
    for (char c : s) {
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
    return result;
}

int main() {
    std::string str = "Hello, world! Foo bar";
    std::vector<std::string> words = words_string(str);
    bool same = issame(words, {"Hello", "world", "Foo", "bar"});
    if (same) {
        std::cout << "Words are the same." << std::endl;
    } else {
        std::cout << "Words are different." << std::endl;
    }
    return 0;
}