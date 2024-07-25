string find_max(vector<string> words){
    string max_word = "";
    int max_unique_chars = 0;

    for(auto& word : words) {
        int unique_chars = 0;
        set<char> char_set(word.begin(), word.end());
        if(char_set.size() > max_unique_chars) {
            max_unique_chars = char_set.size();
            max_word = word;
        }
    }

    return max_word;
}