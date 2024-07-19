vector<string> split_words(string txt){
    vector<string> result;
    string word;
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        result.push_back(word);
    }
    if(result.empty()){
        int odd_lowercase_count = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                odd_lowercase_count++;
            }
        }
        return {to_string(odd_lowercase_count)};
    }
    return result;
}