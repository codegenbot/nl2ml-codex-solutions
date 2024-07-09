#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    return a==b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        pairs.push_back({sum, i});
    }
    sort(pairs.begin(), pairs.end());
    std::vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }
    return result;
}

int main() {
    assert(issame({0,6,6,-76,-21,23,4}, order_by_points({0,6,6,-76,-21,23,4})));
    return 0;
}