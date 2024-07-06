#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    set<char> uniqueLetters(test.begin(), test.end());
    for (char c : uniqueLetters) {
        size_t pos = 0;
        while ((pos = test.find(c, pos)) != string::npos) {
            pos += 1; // skip the same character
        }
        if (pos > 0) result[c] = pos - 1;
    }

    map<char, int> maxCountMap;
    int maxCount = 0;
    for (auto& pair : result) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxCountMap.clear();
            maxCountMap[pair.first] = pair.second;
        } else if (pair.second == maxCount)
            maxCountMap[pair.first] = pair.second;
    }

    return maxCountMap;
}

int main() {
    string test;
    cout << "Enter a string: ";
    getline(cin, test);
    
    map<char, int> result = histogram(test);

    if (!result.empty()) {
        for (auto& pair : result) {
            cout << "Character '" << pair.first << "' appears " << pair.second << " times." << endl;
        }
    } else
        cout << "No characters found in the string." << endl;

    return 0;
}