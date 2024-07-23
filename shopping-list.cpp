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
        prices[i] = prices[i] - prices[i] * discounts[i] / 100;
    }
    float total = 0.0;
    for (int i = 0; i < n; ++i) {
        total += prices[i];
    }
    cout << total << endl;
    return 0;
}