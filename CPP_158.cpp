#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

std::string find_max(std::vector<std::string> words) {
    std::string result = "";
    int max_unique_chars = 0;

    for (const auto& word : words) {
        std::unordered_set<char> unique_chars;
        for (char c : word) {
            unique_chars.insert(c);
        }
        if (unique_chars.size() > max_unique_chars) {
            max_unique_chars = unique_chars.size();
            result = word;
        } else if (unique_chars.size() == max_unique_chars && word.length() > result.length()) {
            result = word;
        }
    }

    return result;
}

int main2() {
    std::vector<std::string> words = {"play", "play", "play"};
    std::cout << find_max(words) << std::endl;
    return 0;
}