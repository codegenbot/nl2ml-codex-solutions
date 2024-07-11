string find_max(vector<string> words){
    string max_word = *words.begin();
    int max_unique_chars = 0;

    for(const auto& word : words){
        int unique_chars = std::unordered_set<char>(word.begin(), word.end()).size();
        if(unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)){
            max_word = word;
            max_unique_chars = unique_chars;
        }
    }

    return max_word;
}