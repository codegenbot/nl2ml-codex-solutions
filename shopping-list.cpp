#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

float shoppingList(vector<float>& prices, vector<float>& discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n, 0.0f); // initialize all elements to 0.0f
    for (float& price : prices) {
        cin >> price;
    }
    cin >> n;
    vector<float> discounts(n, 0.0f); // initialize all elements to 0.0f
    for (float& discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}