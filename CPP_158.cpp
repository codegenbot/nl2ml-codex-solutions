string find_max(vector<string> words){
    string max = *max_element(words.begin(), words.end(),
        [&] (const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    
    return max;
}