#include <vector>
#include <initializer_list>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = (i / 3) - 2; 
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    }
    return sum;
}

int main() { return fuelCost({1, 2, 3, 4, 5}); }