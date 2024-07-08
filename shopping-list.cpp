#include <vector>
#include <iostream> 
#include <iomanip>

using namespace std;

float shoppingList(float price[], int n, float discount[]) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += price[i] * (1 - discount[i] / 100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> price(n), discount(n);
    for (int i = 0; i < n; i++) {
        cin >> price[i] >> discount[i];
    }
    cout << fixed << setprecision(1) << shoppingList(&price[0], n, &discount[0]) << endl;
    return 0;
}