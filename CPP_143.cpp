string words_in_sentence(string sentence){
    string result = "";
    for(auto word : split(sentence, " ")){
        if(isPrime(word.length())){
            result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}

vector<string> split(const string& s, const string& delimiter) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = s.find(delimiter)) != string::npos) {
        tokens.push_back(s.substr(0, pos));
        s.erase(0, pos + delimiter.length());
    }
    tokens.push_back(s);
    return tokens;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}