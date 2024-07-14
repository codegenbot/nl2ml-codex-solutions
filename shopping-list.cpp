#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

double shoppingList(const vector<float>& prices, const vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (float& price : prices) {
        cin >> price;
    }
    cin.ignore();
    int m;
    cin >> m;
    vector<float> discounts(m);
    for (float& discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;