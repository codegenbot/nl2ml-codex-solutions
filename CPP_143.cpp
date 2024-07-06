#include <string>
#include <vector>

string words_in_sentence(string sentence) {
    string result = "";
    for (const auto& word : split(sentence, " ")) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result;
}

vector<string> split(const string& str, const string& delim) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(delim)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + delim.length());
    }
    tokens.push_back(str);
    return tokens;
}

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}