int vowels_count(string s){
    int count = 0;
    for(char c : s){
        if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || (tolower(c) == 'u' && (&c == &s.back())) || (tolower(c) == 'y' && (&c == &s.back())))
            count++;
    }
    return count;
}