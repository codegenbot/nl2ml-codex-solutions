#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coinValues = {25, 10, 5, 1}; // quarter, dime, nickel, penny
    vector<int> coins(4);

    for (int i = 0; i < 4; ++i) {
        while (cents >= coinValues[i]) {
            cents -= coinValues[i];
            coins[i]++;
        }
    }

    cout << coins[0] << endl;
    cout << coins[1] << endl;
    cout << coins[2] << endl;
    cout << coins[3] << endl;

    return 0;
}