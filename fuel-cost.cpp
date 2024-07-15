#include <vector>
#include <cmath>
#include <initializer_list>

using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int val = static_cast<int>(floor(double(i) / 3)) - 2;
        sum += val;
    }
    return sum;