string find_max(vector<string> words){
    string result = words[0];
    int max_unique_chars = 0;

    for(auto &word : words){
        set<char> unique_chars(word.begin(), word.end());
        if(unique_chars.size() > max_unique_chars){
            max_unique_chars = unique_chars.size();
            result = word;
        } else if(unique_chars.size() == max_unique_chars){
            result = min(result, word);
        }
    }

    return result;
}