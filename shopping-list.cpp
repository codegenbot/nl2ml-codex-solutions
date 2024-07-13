#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    std::vector<float> prices(n);
    std::vector<float> discounts(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
    }

    float total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        total_price += prices[i] - prices[i] * discounts[i] / 100.0;
    }

    std::cout << "Total price after discounts: " << std::fixed << std::setprecision(2) << total_price << std::endl;

    return 0;
}