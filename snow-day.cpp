#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    return fixed << setprecision(10) << (initialSnow + rateOfSnowFall * hours - proportionOfSnowMeltingPerHour * hours);
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);
    return 0;
}