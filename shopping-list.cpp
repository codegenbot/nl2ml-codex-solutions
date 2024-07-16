#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<double> prices(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> prices[i];
        }

        std::vector<double> discounts(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> discounts[i];
        }

        double total_price = 0.0; 
        for (int i = 0; i < n; ++i) {
            total_price += prices[i] * (1.0 - discounts[i] / 100.0);
        }

        std::cout << std::fixed << total_price << std::endl;
    }

    return 0;
}