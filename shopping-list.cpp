#include <vector>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100.0);
        total += price - discount;
    }
    return total;
}

#include <iostream>
#include <iomanip>

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (float &price : prices) {
        cin >> price;
    }
    int m;
    cin >> m;
    vector<float> discounts(m);
    for (float &discount : discounts) {
        cin >> discount;
    }
    cout << std::fixed << std::setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}