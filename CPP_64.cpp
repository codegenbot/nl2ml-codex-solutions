int vowels_count(string s){
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        char c = tolower(s[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            count++;
        }
        if(c == 'y' && i == s.length()-1){
            count++;
        }
    }
    return count;
}