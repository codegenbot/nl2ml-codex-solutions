#include <vector>
using namespace std;

double shoppingList(const vector<float>& prices, const vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); ++i) {
        double price = prices[i];
        double discount = discounts[i] / 100.0;
        total += price - price * discount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    
    vector<float> prices(n);
    for (float &price : prices) {
        cin >> price;
    }

    vector<float> discounts(n);
    for (float &discount : discounts) {
        cin >> discount;
    }
    
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;

    return 0;
}