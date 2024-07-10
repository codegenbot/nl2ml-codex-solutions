#include <vector>
#include <algorithm>

string words_in_sentence(string sentence) {
    vector<string> words = split(sentence, ' ');
    string result;
    
    for (int i = 0; i < words.size(); i++) {
        if (is_prime(words[i].length())) {
            result += words[i] + " ";
        }
    }
    
    return result.substr(0, result.length() - 1);
}

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

vector<string> split(string sentence, char delimiter) {
    vector<string> result;
    string temp;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == delimiter) {
            result.push_back(temp);
            temp = "";
        } else {
            temp += sentence[i];
        }
    }

    result.push_back(temp);

    return result;
}