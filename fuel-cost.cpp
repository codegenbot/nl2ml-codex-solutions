```cpp
#include <vector>

int fuelCost(vector<int> &v) {
    int sum = 0;
    for (int i : v) {
        int result = std::floor((double)i / 3) - 2;
        sum += result;
    }
    return sum;
}