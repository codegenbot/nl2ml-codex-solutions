#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        groundSnow += rateOfSnowFall - (proportionMeltingPerHour * groundSnow);
    }
    
    return groundSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfSnowFall, proportionMeltingPerHour;
    cin >> groundSnow >> rateOfSnowFall >> proportionMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfSnowFall, proportionMeltingPerHour) << endl;
    return 0;