#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

double shoppingList(vector<float>& prices, vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (auto& price : prices) {
        cin >> price;
    }
    cin >> n;
    vector<float> discounts(n);
    for (auto& discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}