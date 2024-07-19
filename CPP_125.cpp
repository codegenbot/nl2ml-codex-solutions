vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    for(char c : txt){
        if(c == ' '){
            result.push_back(word);
            word = "";
        }
        else if(c == ','){
            result.push_back(word);
            word = "";
        }
        else{
            word += c;
        }
    }
    if(word != ""){
        result.push_back(word);
    }
    if(result.size() == 0){
        int oddCount = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                oddCount++;
            }
        }
        result.push_back(to_string(oddCount));
    }
    return result;
}