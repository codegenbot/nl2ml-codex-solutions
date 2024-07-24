#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    
    size_t pos = 0;
    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    
    if (txt.empty()) {
        return result;
    }
    
    pos = txt.find(',');
    if (pos == string::npos) {
        int oddCount = 0;
        for (char c : txt) {
            if (isalpha(c)) {
                if (tolower(c) - 'a' % 2 != 0) {
                    oddCount++;
                }
            }
        }
        result.push_back(to_string(oddCount));
    } else {
        while ((pos = txt.find(',')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        if (!txt.empty()) {
            result.push_back(txt);
        }
    }
    
    return result;
}