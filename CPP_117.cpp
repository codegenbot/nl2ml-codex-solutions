vector<string> select_words(string s, int n){
    vector<string> result;
    string word = "";
    int count = 0;
    
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            if(count == n){
                result.push_back(word);
            }
            word = "";
            count = 0;
        } else {
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
                count++;
            }
            word += s[i];
        }
    }
    
    if(count == n){
        result.push_back(word);
    }
    
    return result;
}