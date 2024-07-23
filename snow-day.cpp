#include <iomanip>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow *= (1 - proportionMeltingPerHour);
    }
    
    return initialSnow + totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionMeltingPerHour;
    cout << fixed << setprecision(6) << snowDay(hours, initialSnow, rateOfSnowFall, proportionMeltingPerHour);
    
    return 0;
}