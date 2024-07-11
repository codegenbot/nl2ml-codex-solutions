#include <vector>
using namespace std;

int luhn(vector<int>& card) {
    int sum = 0;
    for(int i = 0; i < card.size(); i++) {
        if(i % 2 == 1) {
            int temp = card[i] * 2;
            if(temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += card[i];
        }
    }
    return sum;
}

int main() {
    // Read input from user
    int n;
    cin >> n;
    vector<int> card(16);
    for(int i = 0; i < 16; i++) {
        cin >> card[i];
    }

    // Verify the credit card number using Luhn's algorithm
    cout << luhn(card) << endl;

    return 0;
}