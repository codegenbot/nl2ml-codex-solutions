#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    float totalSnow = 0.0;
    for (int i = 0; i < hours; i++) {
        totalSnow += groundSnow;
        totalSnow += rate;
        if (melt > 0.0) {
            totalSnow -= min(totalSnow, melt);
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, melt;
    cin >> groundSnow >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, melt) << endl;
    return 0;
}