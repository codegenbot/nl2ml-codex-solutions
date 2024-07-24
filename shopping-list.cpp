#include <vector>
using namespace std;

double shoppingList(int n, vector<float> prices, int m, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<float> prices(n), discounts(m);
    for (float& price : prices) {
        cin >> price;
    }
    for (float& discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << shoppingList(n, prices, m, discounts) << endl;
    return 0;
}