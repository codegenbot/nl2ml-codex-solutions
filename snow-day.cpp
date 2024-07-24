#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfMeltingPerHour) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        if (totalSnow > 0)
            totalSnow -= totalSnow * proportionOfMeltingPerHour;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfMeltingPerHour;
    double result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfMeltingPerHour);
    cout << fixed << setprecision(10) << result;
    return 0;
}