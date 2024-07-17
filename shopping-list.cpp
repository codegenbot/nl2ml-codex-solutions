#include <vector>
#include <iostream>

using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); ++i) {
        float price = prices[i];
        float discount = price * discounts[i] / 100.0f;
        total += price - discount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (auto& p : prices) {
        cin >> p;
    }
    vector<float> discounts(n);
    for (auto& d : discounts) {
        cin >> d;
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}