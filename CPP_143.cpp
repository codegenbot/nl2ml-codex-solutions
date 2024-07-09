#include <vector>
#include <string>

using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

string words_in_sentence(string sentence) {
    vector<string> words = split(sentence, ' ');
    string result;

    for (const auto& word : words) {
        if (isPrime(word.length())) {
            result += word + " ";
        }
    }

    return result.substr(0, result.size() - 1);
}

vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    size_t pos = 0;
    size_t prev = 0;

    while ((pos = str.find(delimiter, prev)) != string::npos) {
        tokens.push_back(str.substr(prev, pos - prev));
        prev = pos + 1;
    }

    tokens.push_back(str.substr(prev));
    return tokens;
}