#include <vector>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    for (int i = card.size() - 1; i >= 0; --i) {
        int digit = card[i];
        if ((card.size() - i) % 2 == 1)
            digit *= 2;
        if (digit > 9)
            digit -= 9;
        sum += digit;
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