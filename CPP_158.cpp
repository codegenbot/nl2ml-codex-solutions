string find_max(vector<string> words) {
    string max_word = *min_element(words.begin(), words.end(), 
        [](const string& a, const string& b){
            if (a.size() == b.size()) return a < b;
            return a.size() > b.size();
        });
    return max_word;
}