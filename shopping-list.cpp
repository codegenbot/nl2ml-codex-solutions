#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    vector<float> discounts(n);

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }

    float total_price = 0.0;
    for (int i = 0; i < n; i++) {
        total_price += prices[i] - prices[i] * discounts[i]; // Remove division by 100.0
    }

    cout << fixed << setprecision(2) << total_price << endl;

    return 0;
}