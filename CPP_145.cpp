#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

using namespace std;

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> order_by_points(const std::vector<int>& nums) {
    std::vector<int> sorted_nums = nums; 
    std::sort(sorted_nums.begin(), sorted_nums.end(), [&](int a, int b) {
        int sum_a = std::accumulate(std::to_string(abs(a)).begin(), std::to_string(abs(a)).end(), 0, [](int acc, char c) { return acc + c - '0'; });
        int sum_b = std::accumulate(std::to_string(abs(b)).begin(), std::to_string(abs(b)).end(), 0, [](int acc, char c) { return acc + c - '0'; });
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return sorted_nums;
}