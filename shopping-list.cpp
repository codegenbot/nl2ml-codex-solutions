#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

double shoppingList(vector<double> prices, vector<double> discounts) {
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]/100);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<double> prices(n), discounts(n);
    for(int i = 0; i < n; i++) {
        cin >> prices[i] >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}