int vowels_count(string s){
    int count = 0;
    for(char c : s){
        if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
            count++;
        }
    }
    if(!s.empty() && (tolower(s.back()) == 'y')){
        count--;
        count = max(0, count);
    }
    return count;
}