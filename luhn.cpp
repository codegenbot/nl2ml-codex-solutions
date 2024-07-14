#include <vector>
using namespace std;

int luhn(const vector<int>& card) {
    int sum = 0;
    for (int i = card.size() - 1; i >= 0; --i) {
        if ((card[i] * 2) > 9) {
            sum += (card[i] * 2) - 9;
        } else {
            sum += card[i] * 2;
        }
        sum += card[i-1];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> card(n);
    for (int i = 0; i < n; ++i) {
        cin >> card[i];
    }
    cout << luhn(card) << endl;
    return 0;
}