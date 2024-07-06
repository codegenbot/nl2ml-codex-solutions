#include <iostream>
#include <vector>
#include <numeric>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    return std::accumulate(prices.begin(), prices.end(), 0.0, [&](double sum, float price) {
        return sum + price * (1 - discounts[static_cast<size_t>(std::distance(std::next(&prices[0], std::distance(&price, prices.data())), prices.end()))]);
    });
}

int main() {
    std::vector<float> prices = {50.0, 100.0};
    std::vector<float> discounts = {10.0, 20.0};
    const auto max_capacity = std::vector<float>::capacity(prices);
    std::cout << "Maximum capacity: " << max_capacity << std::endl;
    std::cout << shoppingList(prices, discounts) << std::endl;
    return 0;
}