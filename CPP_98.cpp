int count_upper(string s){
    int count = 0;
    string vowels = "AEIOU";
    for(int i = 0; i < s.length(); i += 2){
        if(s[i] >= 'A' && s[i] <= 'Z' && vowels.find(s[i]) != string::npos){
            count++;
        }
    }
    return count;
}