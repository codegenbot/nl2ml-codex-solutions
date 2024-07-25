#include <vector>
#include <string>
#include <map>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<int> num_arr;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            num_arr.push_back(i);
    }
    sort(num_arr.begin(), num_arr.end());
    reverse(num_arr.begin(), num_arr.end());
    vector<string> result;
    map<int, string> num_map = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
                                 {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int i : num_arr) {
        result.push_back(num_map[i]);
    }
    return result;
}

int main() {
    vector<int> arr = {9, 4, 8};
    assert(issame(by_length(arr), {"Nine", "Four", "Eight"}));
    return 0;
}