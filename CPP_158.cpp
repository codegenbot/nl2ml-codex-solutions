string find_max(vector<string> words){
    string max_word = *words.begin();
    int max_unique_chars = 0;

    for (const auto& word : words) {
        int unique_chars = 0;
        unordered_set<char> char_set(word.begin(), word.end());
        if (char_set.size() > max_unique_chars) {
            max_word = word;
            max_unique_chars = char_set.size();
        } else if (char_set.size() == max_unique_chars) {
            if (word < max_word) {
                max_word = word;
            }
        }
    }

    return max_word;
}