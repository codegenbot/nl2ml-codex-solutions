#include <vector>
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (const string& s : lst) {
        int odd_count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        string output = "the number of odd elements " + to_string(odd_count) + " in the string " + s + " of the input.";
        result.push_back(output);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 3 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    }));
    cout << "All tests passed!" << endl;
    return 0;
}