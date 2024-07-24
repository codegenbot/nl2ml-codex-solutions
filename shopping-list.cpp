#include <vector>
using namespace std;

double shoppingList(double price[], int n, double discount[]) {
    double total = 0;
    for(int i=0; i<n; i++) {
        double amount = price[i] - (price[i]*discount[i]/100);
        if(amount < 0) amount = 0;
        total += amount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<double> prices(n);
    for(int i=0; i<n; i++) {
        cin >> prices[i];
    }
    cin >> n;
    vector<double> discounts(n);
    for(int i=0; i<n; i++) {
        cin >> discounts[i];
    }
    cout << fixed << setprecision(1) << shoppingList(&prices[0], n, &discounts[0]) << endl;
    return 0;
}