#include <vector>
using namespace std;

float calculateTotalPrice(const vector<float>& prices, const vector<float>& discounts) {
    float totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        float price = prices[i];
        float discount = price * discounts[i] / 100.0f;
        totalPrice += price - discount;
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

    cout << fixed << setprecision(1) << calculateTotalPrice(prices, discounts) << endl;

    return 0;
}