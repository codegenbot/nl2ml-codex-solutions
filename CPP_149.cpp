#include <cassert>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string &s) {
        return s.size() % 2 != 0;
    }), lst.end());

    // Sort by length, then alphabetically
    sort(lst.begin(), lst.end(), [](const string &a, const string &b) {
        if (a.size() == b.size())
            return a < b;
        return a.size() < b.size();
    });

    return lst;
}

int main() {
    // Testing the function
    assert(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) == vector<string>{"cc", "dd", "aaaa", "bbbb"});
    cout << "Test passed!" << endl;
    return 0;
}