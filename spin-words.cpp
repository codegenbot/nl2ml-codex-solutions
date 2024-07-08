#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
int main() {
    string input;
    getline(cin, input);
    vector<string> words = split(input, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            string reversedWord = words[i];
            reverse(reversedWord.begin(), reversedWord.end());
            words[i] = reversedWord;
        }
    }
    string output = join(words, ' ');
    cout << output << endl;
    return 0;
}