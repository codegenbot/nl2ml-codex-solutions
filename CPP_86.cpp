```
#include <string>
using namespace std;

string anti_shuffle(string s){
    string result = "";
    for (const auto& word : split(s, " ")) {
        result += std::accumulate(word.begin(), word.end(),
            string{}, [](string acc, char c) { return acc + c; }) + " ";
    }
    return result.substr(0, result.size() - 1);
}

string split(const string& str, const string& delimiter) {
    size_t pos = 0;
    vector<string> tokens;
    while ((pos = str.find(delimiter)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + delimiter.length());
    }
    tokens.push_back(str);
    return string(tokens.begin(), tokens.end());
}