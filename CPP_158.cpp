string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end());
    for(string word : words){
        if(count(word.begin(), word.end, [](char c){return isalpha(c);}) > count(max_word.begin(), max_word.end(), [](char c){return isalpha(c);})) {
            max_word = word;
        }
    }
    return max_word;
}