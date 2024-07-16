#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

map<string, int> num_map = {
    {"zero", 0},
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9}
};

string sort_numbers(string numbers);

int main() {
    string input_numbers = "one five three two";
    string sorted_result = sort_numbers(input_numbers);
    cout << sorted_result << endl;
    return 0;
}

string sort_numbers(string numbers) {
    map<int, string> rev_map;
    for (const auto& pair : num_map) {
        rev_map[pair.second] = pair.first;
    }

    vector<int> sorted_nums;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        sorted_nums.push_back(num_map[token]);
    }
    sort(sorted_nums.begin(), sorted_nums.end());

    string result;
    for (const auto& num : sorted_nums) {
        result += rev_map[num] + " ";
    }

    if (!result.empty()) {
        result.pop_back(); // Remove extra space at the end
    }

    return result;
}