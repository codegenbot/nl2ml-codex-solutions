
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string find_max(const std::vector<char>& words) {
    std::string max_word = "";
    int max_count = 0;
    for (int i = 0; i < words.size(); i++) {
        const std::string& word = words[i];
        int count = 0;
        for (int j = 0; j < word.length(); j++) {
            if (word[j] != ' ') {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_word = word;
        } else if (count == max_count && word < max_word) {
            max_word = word;
        }
    }
    return max_word;
}

int main() {
    assert ((find_max(std::vector<char>{"play", "play", "play"}) == "play"));
    return 0;
}