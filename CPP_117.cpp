vector<string> select_words(string s,int n){
    vector<string> result;
    string word = "";
    int consonantCount = 0;
    
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' '){
            word += s[i];
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
                consonantCount++;
            }
        }
        else{
            if(consonantCount == n){
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        }
    }
    
    if(consonantCount == n){
        result.push_back(word);
    }
    
    return result;
}