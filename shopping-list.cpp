#include <vector>
using namespace std;

double shoppingList(const vector<float>& prices, const vector<float>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        totalPrice += prices[i] * (1 - discounts[i] / 100);
    }
    return totalPrice;
}

int main() {
    int n;
    cin >> n;
    
    vector<float> prices(n);
    vector<float> discounts(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> prices[i] >> discounts[i];
    }
    
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    
    return 0;
}