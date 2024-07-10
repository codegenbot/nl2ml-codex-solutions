#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <iostream>
#include <cassert>

bool is_same(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr){
    std::vector<std::string> result;
    std::vector<int> sorted_arr;

    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_arr.push_back(num);
        }
    }

    std::sort(sorted_arr.begin(), sorted_arr.end());
    std::reverse(sorted_arr.begin(), sorted_arr.end());

    std::map<int, std::string> num_to_name = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };

    for (int num : sorted_arr) {
        result.push_back(num_to_name[num]);
    }

    return result;
}

int main() {
    assert(is_same(by_length({9, 4, 8}), std::vector<std::string>{"Nine", "Four", "Eight"}));
    return 0;
}