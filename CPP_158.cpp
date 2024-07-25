string find_max(vector<string> words){
    string result;
    int max_unique_chars = 0;
    
    for (const string& word : words) {
        unordered_set<char> unique_chars(word.begin(), word.end());
        
        if (unique_chars.size() > max_unique_chars || 
            (unique_chars.size() == max_unique_chars && word < result)) {
            max_unique_chars = unique_chars.size();
            result = word;
        }
    }
    
    return result;
}