vector<string> select_words(string s, int n){
    vector<string> result;
    if(s.empty()) return result;
    
    string word = "";
    int count = 0;
    for(char c : s){
        if(c == ' '){
            if(count == n){
                result.push_back(word);
            }
            word = "";
            count = 0;
        }
        else if(isalpha(c)){
            if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
               c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U'){
                count++;
            }
            word += c;
        }
    }
    
    if(count == n){
        result.push_back(word);
    }
    
    return result;
}