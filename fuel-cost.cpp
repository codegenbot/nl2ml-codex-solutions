#include <vector>

int calculateFuelCost(vector<int> &numbers) {
    int sum = 0;
    for (int num : numbers) {
        double result = (double)num / 3.0;
        sum += int(result) - 2;
    }
    return sum;
}