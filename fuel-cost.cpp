#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    int n;
    while (std::cin >> n || !std::cin.eof()) {
        nums.push_back(n);
    }

    int sum = 0;
    for (int num : nums) {
        sum += (num / 3) - 2;
    }

    std::cout << sum << std::endl;

    return 0;
}