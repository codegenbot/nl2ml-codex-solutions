string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += " ";
        }else{
            string word;
            for(int j=i; j<s.length() && s[j] != ' '; j++){
                word.push_back(toupper(s[j]));
            }
            for(auto c : word){
                result += c;
            }
            i = j - 1;
        }
    }
    return result;
}