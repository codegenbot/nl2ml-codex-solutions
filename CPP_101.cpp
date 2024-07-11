#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

vector<string> words_string(string s){
    vector<string> words;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }
    return words;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);

    vector<string> words = words_string(input);

    cout << "Words separated by spaces: ";
    for (const auto& w : words) {
        cout << w << " ";
    }
    cout << endl;

    return 0;
}