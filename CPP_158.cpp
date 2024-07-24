```c++
std::string find_max(vector<std::string> words){
    std::string max_word = "";
    int max_unique_chars = 0;

    for (const auto& word : words) {
        std::set<char> unique_chars(word.begin(), word.end());
        if (unique_chars.size() > max_unique_chars) {
            max_word = word;
            max_unique_chars = unique_chars.size();
        } else if (unique_chars.size() == max_unique_chars && word < max_word) {
            max_word = word;
        }
    }

    return max_word;
}