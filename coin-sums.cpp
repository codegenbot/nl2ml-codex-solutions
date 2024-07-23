#include <vector>
#include <iostream>

using namespace std;

vector<int> coinSums(int cents) {
    vector<int> coins(4);
    
    while (cents > 0) {
        if (cents >= 25) {
            coins[3]++;
            cents -= 25;
        } else if (cents >= 10) {
            coins[2]++;
            cents -= 10;
        } else if (cents >= 5) {
            coins[1]++;
            cents -= 5;
        } else {
            coins[0]++;
            cents--;
        }
    }
    
    return coins;
}

int main() {
    int cents;
    cin >> cents;
    vector<int> result = coinSums(cents);
    for (int i = 0; i < 4; i++) {
        cout << result[i] << endl;
    }
    return 0;
}