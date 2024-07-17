#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float groundSnow, float rate, float meltRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rate;
        groundSnow *= (1 - meltRate);
    }
    return totalSnow + groundSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, meltRate;
    cin >> groundSnow >> rate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, meltRate) << endl;
    return 0;
}