#include <vector>
#include <iostream>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0.0;
    
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] - (prices[i] * discounts[i] / 100);
        total += discountedPrice;
    }
    
    return total;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }
    
    int m;
    std::cin >> m;
    
    std::vector<float> discounts(m);
    for (int i = 0; i < m; i++) {
        std::cin >> discounts[i];
    }
    
    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << totalPrice << std::endl;
    
    return 0;
}