string result;
    string vowels = "aeiouAEIOU";
    for(char c : text) {
        if(vowels.find(c) == string::npos) {
            result += c;
        }
    }
    return result;
}