#include <vector>
using namespace std;

double totalShoppingPrice(vector<float> prices, vector<float> discounts) {
    double totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float price = prices[i];
        float discount = price * discounts[i] / 100.0;
        totalPrice += price - discount;
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (float &price : prices) {
        cin >> price;
    }

    vector<float> discounts(n);
    for (float &discount : discounts) {
        cin >> discount;
    }

    cout << fixed << setprecision(1) << totalShoppingPrice(prices, discounts) << endl;

    return 0;
}