#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cassert>
#include <string>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    map<string, string> numToString = {
        {"1", "One"}, {"2", "Two"}, {"3", "Three"}, {"4", "Four"},
        {"5", "Five"}, {"6", "Six"}, {"7", "Seven"}, {"8", "Eight"}, {"9", "Nine"}
    };

    vector<int> filtered;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered.push_back(num);
        }
    }

    sort(filtered.begin(), filtered.end(), greater<int>());

    for (int num : filtered) {
        result.push_back(numToString[to_string(num)]);
    }

    return result;
}

int main() {
    // Your existing code here

    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));

    return 0;
}