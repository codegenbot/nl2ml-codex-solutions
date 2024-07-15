Here is the completed code:

vector<string> words_string(string s) {
    vector<string> result;
    string word;
    for (char c : s) {
        if (c == ' ' || c == ',') {
            result.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    result.push_back(word);
    return result;
}