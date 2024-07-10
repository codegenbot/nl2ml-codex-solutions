```cpp
#include <iostream>
#include <vector>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            break; 
        }
    }
    return count;

}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(std::vector<int>::size_type());
    while (n--) {
        int num; 
        while (!(std::cin >> num)) {
            std::cout << "Invalid input. Please enter a non-negative integer: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin >> num; // add this line to keep asking for input
        }
        if (num >= 0) {
            nums.push_back(num);
        } else {
            break; 
        }
    }
    if (nums.empty()) {  // If no numbers were read, there's nothing to count
        std::cout << "No numbers were read." << std::endl;
        return 0;
    }
    std::cout << "Count of positive sums is: " << count_nums(nums) << std::endl;
    return 0;

}