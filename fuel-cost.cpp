#include <vector>
#include <cmath>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = i / 3;
        temp = std::floor(temp) - 2;
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    }
    return sum;