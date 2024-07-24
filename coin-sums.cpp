#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    vector<int> coins = {25, 10, 5, 1};
    vector<int> result(4, 0);
    
    for (int i = 0; i < 4; ++i) {
        while (cents >= coins[i]) {
            int count = cents / coins[i];
            cents -= count * coins[i];
            result[i] = count;
        }
    }
    
    cout << result[0] << endl;
    cout << result[1] << endl;
    cout << result[2] << endl;
    cout << result[3] << endl;
    
    return 0;
}