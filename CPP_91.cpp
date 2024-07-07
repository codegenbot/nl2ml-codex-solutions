int is_bored(string S){
    int count = 0;
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S[pos] == 'I' && (pos + 1 < S.size() && (S[pos + 1] == '.' || S[pos + 1] == '?' || S[pos + 1] == '!'))) {
            count++;
        }
        pos = S.find("I", pos + 1);
    }
    return count;
}