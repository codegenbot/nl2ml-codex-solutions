#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
#include <map>

using namespace std;

vector<string> by_length(const vector<int>& arr){
    vector<string> result;
    map<int, string> num_to_str = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    vector<int> filtered_arr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered_arr.push_back(num);
        }
    }

    sort(filtered_arr.begin(), filtered_arr.end());

    for (int num : filtered_arr) {
        result.push_back(num_to_str[num]);
    }

    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}