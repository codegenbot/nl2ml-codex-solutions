#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b);
std::vector<std::string> by_length(std::vector<int> arr);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    std::map<int, std::string> num_to_word = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    std::vector<int> sorted_arr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_arr.push_back(num);
        }
    }

    std::sort(sorted_arr.begin(), sorted_arr.end());

    std::reverse(sorted_arr.begin(), sorted_arr.end());

    for (int num : sorted_arr) {
        result.push_back(num_to_word[num]);
    }

    return result;
}

int main() {
    std::vector<int> input = {4, 2, 7, 1, 5, 9};
    std::vector<std::string> output = by_length(input);

    std::vector<std::string> expected_output = {"Nine", "Seven", "Five", "Four", "Two", "One"};
    assert(issame(output, expected_output));

    return 0;
}