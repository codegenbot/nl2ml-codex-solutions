#include <iostream>
#include <iomanip>

using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;
        totalSnow -= totalSnow * proportionOfSnowMeltingPerHour;
    }
    
    return initialSnow + totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionOfSnowMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowfall >> proportionOfSnowMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionOfSnowMeltingPerHour);

    return 0;
}