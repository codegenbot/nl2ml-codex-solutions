#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    int n;
    while (std::cin >> n) {
        nums.push_back(n);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += static_cast<int>(num / 3) - 2;
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}