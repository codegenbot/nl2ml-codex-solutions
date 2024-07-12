string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string &s1, const string &s2) {
            if (s1.size() == s2.size())
                return s1 < s2;
            return s1.size() > s2.size();
        });
    return result;
}