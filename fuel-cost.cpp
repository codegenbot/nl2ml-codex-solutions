#include <vector>
using namespace std;

int fuelCost(vector<int> prices) {
    int sum = 0;
    for (int price : prices) {
        int newPrice = (price / 3);
        newPrice = min(newPrice, 0); // round down to nearest integer
        newPrice -= 2; // subtract 2
        sum += newPrice;
    }
    return sum;
}