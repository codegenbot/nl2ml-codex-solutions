#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float onGround, float rate, float melt) {
    float total = 0;
    for (int i = 0; i < hours; i++) {
        total += rate;
        if (total > onGround) {
            total -= (total - onGround);
        } else {
            total -= melt * total;
        }
    }
    return total;
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, melt;
    cin >> onGround >> rate >> melt;
    cout << fixed << setprecision(6) << snowDay(hours, onGround, rate, melt) << endl;
    return 0;
}