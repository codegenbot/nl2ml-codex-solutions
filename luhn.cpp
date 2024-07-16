#include <vector>
#include <iostream>
using namespace std;

int luhnCheck(vector<int> cardNum) {
    int sum = 0;
    for (int i = cardNum.size() - 1; i >= 0; i--) {
        if ((i % 2 == 0 && cardNum[i] * 2 > 9) || (i % 2 != 0)) {
            sum += (cardNum[i] * 2) > 9 ? (cardNum[i] * 2) - 9 : cardNum[i] * 2;
        } else {
            sum += cardNum[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> cardNum(n);
    for (int i = 0; i < n; i++) {
        cin >> cardNum[i];
    }
    cout << luhnCheck(cardNum) << endl;
    return 0;
}