string find_max(vector<string> words) {
    int max_unique = 0;
    string max_word = "";
    
    for (const auto& word : words) {
        int unique_chars = set<char>(word.begin(), word.end()).size();
        if (unique_chars > max_unique || (unique_chars == max_unique && word < max_word)) {
            max_unique = unique_chars;
            max_word = word;
        }
    }
    
    return max_word;
}