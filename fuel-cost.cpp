```cpp
#include <vector>
#include <cmath>

int totalFuelCost(std::vector<int> fuelCosts) {
    int sum = 0;
    for (int cost : fuelCosts) {
        int newCost = static_cast<int>(floor((double)cost / 3)) - 2;
        sum += newCost;
    }
    return sum;
}