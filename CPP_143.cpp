string words_in_sentence(string sentence){
    string result = "";
    for(auto word : split(sentence, " ")){
        if(is_prime(word.length())){
            result += word + " ";
        }
    }
    return result;
}

vector<string> split(string str, string delimiter) {
    vector<string> tokens;
    size_t pos = 0;
    while((pos = str.find(delimiter)) != stdstring::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + delimiter.length());
    }
    tokens.push_back(str);
    return tokens;
}

bool is_prime(int n) {
    if(n <= 1)
        return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}