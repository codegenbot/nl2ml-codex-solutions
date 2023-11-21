#include <vector>
#include <iostream>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float totalPrice = 0.0;
    int n = prices.size();

    for (int i = 0; i < n; i++) {
        float discountedPrice = prices[i] * (1 - (discounts[i] * prices[i]));
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
    std::cout << totalPrice << std::endl;

    return 0;
}