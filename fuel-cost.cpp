#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int num;
    
    while (!std::cin.eof()) {
        std::cin >> num;
        nums.push_back(num);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += (num / 3) - 2;
    }

    std::cout << sum;
    
    return 0;
}