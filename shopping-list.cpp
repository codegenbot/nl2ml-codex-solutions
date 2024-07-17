#include <vector>
using namespace std;

double shoppingList(vector<double> prices, vector<double> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i] * (1 - discounts[i] / 100);
        total += price;
    }
    return total;
}