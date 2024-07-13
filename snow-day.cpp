#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate;
        if (snow > 0)
            snow -= snow * meltingRate;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltingRate;
    cin >> initialSnow >> snowFallRate >> meltingRate;
    double result = snowDay(hours, initialSnow, snowFallRate, meltingRate);
    cout << fixed << setprecision(6) << result << endl;
    return 0;
}