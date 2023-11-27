int is_bored(string S) {
    int count = 0;
    bool is_sentence_start = true;
    
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'I' && (i == 0 || S[i-1] == '.' || S[i-1] == '?' || S[i-1] == '!')) {
            is_sentence_start = true;
        } else if (S[i] == '.' || S[i] == '?' || S[i] == '!') {
            is_sentence_start = true;
        } else if (is_sentence_start) {
            if (S[i] == ' ') {
                is_sentence_start = false;
            } else {
                count++;
                is_sentence_start = false;
            }
        }
    }
    
    return count;
}