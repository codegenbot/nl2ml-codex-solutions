#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

vector<string> split(const string& str, const string& delimiter) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(delimiter)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + delimiter.length());
    }
    tokens.push_back(str);
    return tokens;
}

string words_in_sentence(string sentence) {
    string result = "";
    for (const auto& word : split(sentence, " ")) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << words_in_sentence(sentence) << endl;
    return 0;
}