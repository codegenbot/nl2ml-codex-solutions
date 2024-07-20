int is_bored(string S){
    int count = 0;
    bool isBored = false;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            isBored = true;
        }
        if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && isBored) {
            count++;
            isBored = false;
        }
    }
    return count;
}