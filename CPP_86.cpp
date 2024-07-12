#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word;
            while (i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            for (char c : word) {
                result += min_element(word.begin(), word.end())->to_string();
            }
        }
    }
    return result;
}