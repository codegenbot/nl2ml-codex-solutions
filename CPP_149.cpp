#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

int main() {
    vector<string> input = {"apple", "orange", "banana", "grape", "kiwi"};
    vector<string> result = sorted_list_sum(input);
    for (const string& item : result) {
        cout << item << " ";
    }
    return 0;
}