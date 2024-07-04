#include <vector>
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (const string& s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        string res = "the number of odd elements " + to_string(count) + 
                     " in the string " + s + " of the input.";
        result.push_back(res);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}) , {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 3 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    }));

    cout << "Test passed!" << endl;

    return 0;
}