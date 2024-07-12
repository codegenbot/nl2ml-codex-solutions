#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double shoppingList(vector<float> prices, vector<vector<float>> discounts) {
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        if (discounts[i][0] > 100 || prices[i] < 0 || discounts[i][0] < 0) {
            cout << "Invalid input. Please enter a discount percentage between 0 and 100." << endl;
            return -1.0;
        }
        total += prices[i] * (1 - discounts[i][0]/100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    vector<vector<float>> discounts(n);
    for(int i = 0; i < n; i++) {
        cin >> prices[i] >> discounts[i][0];
    }
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    return 0;
}