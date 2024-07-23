#include <vector>
#include <iostream>

using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    for(int i = 0; i < card.size(); i++) {
        if(i % 2 == 1) {
            int temp = card[i] * 2;
            if(temp > 9) temp -= 9;
            card[i] = temp;
        }
    }
    for(int i = 0; i < card.size(); i++) {
        sum += card[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> card(n);
    for(int i = 0; i < n; i++) {
        cin >> card[i];
    }
    cout << luhn(card) << endl;
    return 0;
}