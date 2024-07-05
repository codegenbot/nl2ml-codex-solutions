#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

// Function to check if two vectors of strings are the same
bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

// Function to filter strings containing a given substring
vector<string> filter_by_substring(const vector<string>& strings, const string& substring) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    // Test case
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    cout << "Test passed." << endl;
    return 0;
}