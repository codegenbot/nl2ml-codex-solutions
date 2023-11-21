#include <vector>
#include <iostream>
#include <iomanip>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0.0;
    int n = prices.size();

    for (int i = 0; i < n; i++) {
        float discountedPrice = prices[i] * (1 - (discounts[i] / 100.0));
        totalPrice += discountedPrice;
    }

    return totalPrice;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }

    std::vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        std::cin >> discounts[i];
    }

    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << std::fixed << std::setprecision(2) << totalPrice << std::endl;

    return 0;
}