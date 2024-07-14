#include <vector>
using namespace std;

double shoppingList(double prices[], int n, double discounts[], int m) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<double> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    int m;
    cin >> m;
    vector<double> discounts(m);
    for (int i = 0; i < m; i++) {
        cin >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingList(&prices[0], n, &discounts[0], m) << endl;
    return 0;
}