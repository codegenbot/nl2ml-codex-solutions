string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
        }else{
            string word = "";
            for(int j=i; j<s.length() && s[j] != ' '; j++){
                word += s[j];
            }
            i = j - 1;
            for(char c : word){
                result += (char)(c);
            }
        }
    }
    return result;
}