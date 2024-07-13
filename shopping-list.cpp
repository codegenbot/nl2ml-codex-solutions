#include <vector>
#include <cmath>

double calculateTotalPrice(const std::vector<double>& prices, const std::vector<double>& discounts) {
    double total_price = 0.0;
    for (std::size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1.0 - (discounts[i] / 100.0));
    }
    return std::round(total_price * 100) / 100;
}