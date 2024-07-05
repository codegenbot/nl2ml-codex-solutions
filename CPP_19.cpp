#include <vector>
#include <sstream>
#include <algorithm>
#include <string>
#include <map>
#include <cassert>

using namespace std;

string sort_numbers(string numbers) {
    map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    map<int, string> reverse_map = {{0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}};

    stringstream ss(numbers);
    string word;
    vector<int> nums;

    while (ss >> word) {
        nums.push_back(number_map[word]);
    }

    sort(nums.begin(), nums.end());

    string result;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (i > 0) result += " ";
        result += reverse_map[nums[i]];
    }

    return result;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}