```cpp
#include <vector>
#include <algorithm>
#include <string>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

std::vector<std::string> split(const std::string& str, char c) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    while ((pos = str.find(c)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return tokens;
}

std::string words_in_sentence(std::string sentence) {
    std::vector<std::string> words = split(sentence, ' ');
    std::string result;
    
    for (const auto& word : words) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    
    return result.substr(0, result.size() - 1);
}