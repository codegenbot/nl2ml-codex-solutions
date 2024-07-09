#include <algorithm>
#include <vector>
#include <numeric>

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && equal(a.begin(),a.end(),b.begin());
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.emplace_back(sumOfDigits, i);
    }

    sort(pairs.begin(), pairs.end());

    vector<int> result;
    for (const auto& pair : pairs) {
        if (!result.empty() && pair.second < result.back()) {
            result.push_back(nums[pair.second]);
        } else {
            result.emplace_back(nums[pair.second]);
        }
    }

    return result;
}