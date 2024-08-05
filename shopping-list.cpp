```c++
#include <iostream>
#include <iomanip>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100);
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
    for (float &discount : discounts) {
        cin >> discount;
    }
    double result = shoppingList(prices, discounts);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}