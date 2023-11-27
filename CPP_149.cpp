#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string>& a, vector<string>& b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    for (string word : lst) {
        if (word.length() % 2 == 0) {
            result.push_back(word);
        }
    }
    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}

int main() {
    assert(issame(vector<string>(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"})), vector<string>({"cc", "dd", "aaaa", "bbbb"})));
    // add any other test cases if required
    return 0;
}