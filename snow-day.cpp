#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float meltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        int newSnow = static_cast<int>(snow + rateOfFall);
        snow = newSnow - static_cast<int>(newSnow * meltRate / 100.0);
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltRate;
    cin >> initialSnow >> rateOfFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltRate) << endl;
    return 0;
}