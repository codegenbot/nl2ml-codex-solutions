int is_bored(std::string S){
    int count = 0;
    size_t pos = 0;
    while((pos = S.find("I", pos)) != std::string::npos) {
        if (S[pos] == '.' || S[pos] == '?' || S[pos] == '!') 
            count++;
        pos++;
    }
    return count;
}