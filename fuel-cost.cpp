#include <cmath>

int fuelCost(std::vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int result = std::floor((double)i / 3) - 2; 
        sum += result;
    }
    return sum;
}