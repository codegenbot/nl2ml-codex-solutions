#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<float> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    vector<float> discounts(n);
    for (int i = 0; i < n; ++i) {
        cin >> discounts[i];
    }
    
    float total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        total_price += prices[i] * (100.0 - discounts[i]) / 100.0;
        total_price = floorf(total_price * 100) / 100;
    }
    
    cout << fixed << setprecision(2) << total_price << endl;
    
    return 0;
}