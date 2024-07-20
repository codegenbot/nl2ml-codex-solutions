int is_bored(string S){
    int boredom_count = 0;
    bool is_boredom = false;
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            is_boredom = true;
        } else if (is_boredom && (S[i] == '.' || S[i] == '?' || S[i] == '!')) {
            boredom_count++;
            is_boredom = false;
        }
    }
    return boredom_count;
}