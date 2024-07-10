#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> prices(n), discounts(n);

    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> discounts[i];
    }

    float total = 0.0;
    for (int i = 0; i < n; ++i) {
        float discount_amount = prices[i] * discounts[i] / 100;
        total += prices[i] - discount_amount;
    }

    cout << total << endl;

    return 0;
}