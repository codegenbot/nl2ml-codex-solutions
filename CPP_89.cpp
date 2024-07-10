string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            c = ('a' + (c - 'a' + 4) % 26);
        } else if(c >= 'A' && c <= 'Z'){
            c = ('A' + (c - 'A' + 4) % 26);
        }
        result += c;
    }
    return result;
}