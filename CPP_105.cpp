#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> sorted_arr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_arr.push_back(num);
        }
    }
    sort(sorted_arr.begin(), sorted_arr.end());
    reverse(sorted_arr.begin(), sorted_arr.end());
    map<int, string> num_to_name = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };
    for (int num : sorted_arr) {
        result.push_back(num_to_name[num]);
    }
    return result;
}

int main() {
    vector<string> expected_result = {"Nine", "Eight", "Four"};
    vector<string> result = by_length({9, 4, 8});
    assert(issame(result, expected_result));
}