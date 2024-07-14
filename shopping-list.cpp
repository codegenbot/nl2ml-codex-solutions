#include <iostream>
#include <iomanip>
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

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (float &price : prices) {
        cin >> price;
    }
    cin >> n;
    vector<float> discounts(n);
    for (float &p : discounts) { 
        cin >> p;
    }
    cout << fixed << setprecision(2) << shoppingList(prices, discounts) << endl; 
    return 0;
}