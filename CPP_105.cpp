#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> by_length(vector<int> arr) {
    vector<int> filtered;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered.push_back(num);
        }
    }
    sort(filtered.begin(), filtered.end());
    reverse(filtered.begin(), filtered.end());

    map<int, string> numToStr = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    vector<string> result;
    for (int num : filtered) {
        result.push_back(numToStr[num]);
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    cout << "Test passed!" << endl;
    return 0;
}