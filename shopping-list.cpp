#include <iostream>
#include <vector>
#include <iomanip>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float totalPrice = 0.0;
    int n = prices.size();

    for (int i = 0; i < n; i++) {
        float discount = discounts[i] / 100.0f;
        float discountedPrice = prices[i] * (1.0f - discount);
        totalPrice += discountedPrice;
    }

    return totalPrice;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> prices;
    prices.resize(n);
    for (int i = 0; i < n; i++) {
        float price;
        std::cin >> price;
        prices[i] = price;
    }

    std::vector<float> discounts;
    discounts.resize(n);
    for (int i = 0; i < n; i++) {
        float discount;
        std::cin >> discount;
        discounts[i] = discount;
    }

    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << std::fixed << std::setprecision(2) << totalPrice << std::endl;

    return 0;
}