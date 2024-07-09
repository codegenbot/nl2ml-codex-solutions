string find_max(vector<string> words){
    string max_str = "";
    int max_unique_chars = 0;

    for (const auto& word : words) {
        set<char> unique_chars(word.begin(), word.end());
        if (unique_chars.size() > max_unique_chars) {
            max_unique_chars = unique_chars.size();
            max_str = word;
        }
    }

    return max_str;
}