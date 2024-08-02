#include <vector>
using namespace std;

double totalPriceAfterDiscount(vector<float> prices, vector<float> discounts) {
    double totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = discounts[i] / 100.0; // Convert percentage to decimal
        double discountedPrice = price * (1 - discount);
        totalPrice += discountedPrice;
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
    double result = totalPriceAfterDiscount(prices, discounts);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}