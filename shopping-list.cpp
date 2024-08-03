#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    vector<float> discounts(n);

    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> discounts[i];
    }

    float total_price = 0;
    for (int i = 0; i < n; ++i) {
        total_price += prices[i] * (1 - discounts[i] / 100);
    }

    cout << total_price << endl;

    return 0;
}