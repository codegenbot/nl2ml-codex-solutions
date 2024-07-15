#include <iostream>
#include <vector>
#include <map>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    int target;
    std::cin >> target;
    
    std::map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        if (mp.find(target - nums[i]) != mp.end()) {
            std::cout << nums[i] << std::endl;
            std::cout << target - nums[i] << std::endl;
            break;
        }
        mp[nums[i]] = i;
    }
    
    return 0;
}