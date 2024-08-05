#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> digits(16);
    for (int i = 0; i < 16; ++i) {
        cin >> digits[i];
    }

    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        if ((15 - i) % 2 == 0) {
            int doubled = digits[i] * 2;
            sum += (doubled > 9) ? doubled - 9 : doubled;
        } else {
            sum += digits[i];
        }
    }

    cout << sum << endl;

    return 0;
}