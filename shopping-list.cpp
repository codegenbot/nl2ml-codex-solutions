#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

double totalPriceAfterDiscount(const vector<float>& prices, const vector<float>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        double price = prices[i];
        double discount = price * (1 - discounts[i] / 100);
        totalPrice += discount;
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (float& price : prices) {
        cin >> price;
    }

    vector<float> discounts(n);
    for (float& discount : discounts) {
        cin >> discount;
    }

    double totalPrice = totalPriceAfterDiscount(prices, discounts);

    cout << setprecision(1) << fixed << totalPrice << endl;

    return 0;
}