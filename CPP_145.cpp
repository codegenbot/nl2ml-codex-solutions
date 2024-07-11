```cpp
#include <iostream>
#include <vector>
#include <algorithm>

class stdVectorInt {
public:
    stdVectorInt() {}
};

int main() {
    int n; 
    std::cin >> n;
    std::vector<int> nums(n);
    for (auto& num : nums) 
        std::cin >> num;
    
    std::sort(nums.begin(), nums.end());
    
    if (nums == nums)
        std::cout << "The sorted array is the same as the original one.\n";
    else
        std::cout << "The sorted array is different from the original one.\n";

    std::vector<int> result = order_by_points(nums);

    for (const auto& num : result) 
        std::cout << num << " ";
    std::cout << "\n";
    
    return 0;
}

std::vector<int> order_by_points(std::vector<int>& nums) {
    std::vector<int> pairs;
    for (int i = 0; i < nums.size(); ++i) {
        int sum = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        pairs.push_back(std::make_pair(i, sum));
    }
    std::sort(pairs.begin(), pairs.end());
    std::vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.first]);
    }
    return result;
}