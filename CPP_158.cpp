#include <string>
#include <vector>
#include <unordered_set>

std::string find_max(std::vector<std::string> words){
    std::string max_word = "";
    int max_unique_chars = 0;

    for (const std::string& word : words) {
        int unique_chars = std::unordered_set<char>(word.begin(), word.end()).size();
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)) {
            max_word = word;
            max_unique_chars = unique_chars;
        }
    }

    return max_word;
}