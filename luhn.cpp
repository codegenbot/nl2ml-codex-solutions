#include <vector>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    for (int i = 0; i < card.size(); i++) {
        if ((i % 2 == 1)) {
            int temp = card[i] * 2;
            if (temp > 9)
                sum += temp - 9;
            else
                sum += temp;
        } else {
            sum += card[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> card(n);
    for (int i = 0; i < n; i++) {
        cin >> card[i];
    }
    cout << luhn(card) << endl;
    return 0;
}