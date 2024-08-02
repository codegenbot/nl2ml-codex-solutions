#include <algorithm>
#include <sstream>

using namespace std;

string sort_numbers(string numbers) {
    istringstream iss(numbers);
    string num;
    vector<string> nums;

    while (getline(iss, num, ' ')) {
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end());

    string result = "";
    for (const auto& n : nums) {
        result += n + " ";
    }
    return result.substr(0, result.size() - 1);
}