```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split(const string& str, const string& delimiter) {
    size_t pos = 0;
    vector<string> tokens;
    while ((pos = str.find(delimiter)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + delimiter.length());
    }
    tokens.push_back(str);
    return tokens;
}

string anti_shuffle(string s){
    string result = "";
    if (s.empty()) {
        return result;
    } else {
        for (const auto& word : split(s, " ")) {
            result += std::string(word.begin(), word.end()) + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    if (s.empty()) {
        cout << "Anti-Shuffle of input sentence is: " << "" << endl;
    } else {
        cout << "Anti-Shuffle of input sentence is: " << anti_shuffle(s) << endl;
    }
    return 0;
}