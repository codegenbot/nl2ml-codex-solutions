#include <vector>
using namespace std;

int luhnCheck(vector<int> cardNumber) {
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i--) {
        if((cardNumber[i] * 2) > 9)
            sum += (cardNumber[i] * 2) - 9;
        else
            sum += cardNumber[i] * 2;
    }
    for(int i = cardNumber.size() - 1; i >= 0; i--) {
        if(i % 2 != 0)
            sum += cardNumber[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> cardNumber(n);
    for(int i = 0; i < n; i++) {
        cin >> cardNumber[i];
    }
    cout << luhnCheck(cardNumber) << endl;
    return 0;
}