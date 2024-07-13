#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    std::vector<int> nums;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        nums.push_back(num);
    }
    std::cout << "Count of special numbers: " << specialFilter(nums) << std::endl;
    return 0;
}