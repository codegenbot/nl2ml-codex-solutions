#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> prices(n);
    vector<double> discounts(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> prices[i] >> discounts[i];
    }

    double total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        total_price += prices[i] - prices[i] * discounts[i]/100.0;
    }

    cout << fixed << setprecision(2) << total_price << "\n";

    return 0;
}