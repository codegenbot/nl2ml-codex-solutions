# Incorrect Code
int vowels_count(string s){
    int count = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count++;
        }
    }
    if(s.back() == 'y'){
        count--;
    }
    return count;
}