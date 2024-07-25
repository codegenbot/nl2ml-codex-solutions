#include <vector>
using namespace std;

float shoppingTrip(vector<float>& prices, vector<float>& discounts) {
    float total = 0;
    for(int i=0; i<prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]/100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for(auto &price : prices) {
        cin >> price;
    }
    vector<float> discounts(n);
    for(auto &discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << shoppingTrip(prices, discounts) << endl;
    return 0;
}