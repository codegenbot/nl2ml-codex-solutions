vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(word != ""){
        words.push_back(word);
    }
    if(words.empty()){
        int odd_lower_case_count = 0;
        for(char c : txt){
            if(islower(c) && ((c - 'a') % 2 != 0)){
                odd_lower_case_count++;
            }
        }
        words.push_back(to_string(odd_lower_case_count));
    }
    return words;
}