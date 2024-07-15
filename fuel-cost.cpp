#include <vector>
#include <cmath>

int fuelCost(std::vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int val = static_cast<int>(std::floor(double(i) / 3)) - 2;
        sum += val;
    }
    return sum;