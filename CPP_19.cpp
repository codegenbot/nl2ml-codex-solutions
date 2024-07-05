#include<vector>
#include<sstream>
#include<algorithm>

string sort_numbers(string numbers) {
    map<string, int> num_map = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
        {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
        {"eight", 8}, {"nine", 9}
    };
    vector<string> num_strings;
    istringstream iss(numbers);
    string word;
    while (iss >> word) {
        num_strings.push_back(word);
    }
    sort(num_strings.begin(), num_strings.end(), [&](const string &a, const string &b) {
        return num_map[a] < num_map[b];
    });
    string result;
    for (const auto &num : num_strings) {
        if (!result.empty()) result += " ";
        result += num;
    }
    return result;
}