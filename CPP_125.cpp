#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;
    
    while (pos != string::npos) {
        pos = txt.find(' ', prev_pos);
        
        if (pos == string::npos) {
            if (txt.find(',') == string::npos) {
                int count = 0;
                for (char c : txt) {
                    if (c >= 'a' && c <= 'z') {
                        count++;
                        if (count % 2 != 0) {
                            result.push_back(to_string(count));
                            return result;
                        }
                    }
                }
            } else {
                result.push_back(txt.substr(prev_pos));
                return result;
            }
        } else {
            result.push_back(txt.substr(prev_pos, pos - prev_pos));
            prev_pos = pos + 1;
        }
    }
    
    if (txt.find(',') == string::npos) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                count++;
                if (count % 2 != 0) {
                    result.push_back(to_string(count));
                    return result;
                }
            }
        }
    } else {
        result.push_back(txt);
    }
    
    return result;
}

int main() {
    string txt;
    cout << "Enter a string: ";
    getline(cin, txt);
    vector<string> result = split_words(txt);
    for (string s : result) {
        cout << s << endl;
    }
    return 0;
}