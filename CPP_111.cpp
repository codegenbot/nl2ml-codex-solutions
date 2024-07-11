#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;
    
    int maxCount = 0;
    for (char c : test) {
        if (c == ' ') continue;
        if (!result.count(c)) {
            result[c] = 1;
            maxCount = 1;
        } else {
            result[c]++;
            if (result[c] > maxCount)
                maxCount = result[c];
        }
    }
    
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount) {
            cout << "{" << it->first << ", " << it->second << "}" << endl;
        }
    }
    
    return result;
}