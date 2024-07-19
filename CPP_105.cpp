#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cassert>

bool are_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> by_length(std::vector<int> arr) {
    std::vector<int> result;

    std::map<int, std::string> num_to_name = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    std::vector<int> sorted_arr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_arr.push_back(num);
        }
    }

    std::sort(sorted_arr.begin(), sorted_arr.end(), std::greater<int>());

    for (int num : sorted_arr) {
        result.push_back(num);
    }

    return result;
}

int main() {
    assert(are_same(by_length({9, 4, 8}), {9, 8, 4}));
    return 0;
}