#include <iostream>
#include <vector>
using namespace std;

float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountPrice = prices[i] * (1 - (discounts[i] / 100));
        totalPrice += discountPrice;
    }
    return totalPrice;
}

int main() {
    vector<float> prices = {10.0, 20.0, 30.0};
    vector<float> discounts = {10.0, 20.0, 30.0};

    float totalPrice = calculateTotalPrice(prices, discounts);
    cout << "Total Price: " << totalPrice << endl;

    return 0;
}