vector<string> words_string(string s){
    vector<string> result;
    string word = "";
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        } else {
            word += s[i];
        }
    }
    if(word != ""){
        result.push_back(word);
    }
    return result;
}