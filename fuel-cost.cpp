#include <vector>

int fuelCost(vector<int> &v) {
    int sum = 0;
    for (int i : v) {
        int result = static_cast<int>(i / 3.0) - 2;
        if (result < 0) {
            result = 0;
        }
        sum += result;
    }
    return sum;
}