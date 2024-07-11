#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowfall > 0.0) {
            totalSnow += rateOfSnowfall;
        }
        
        if (proportionOfSnowMeltingPerHour > 0.0 && totalSnow > 0.0) {
            totalSnow -= totalSnow * proportionOfSnowMeltingPerHour / 100.0; // convert to percentage
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionOfSnowMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowfall >> proportionOfSnowMeltingPerHour;

    cout << fixed << setprecision(2) << snowDay(hours, initialSnow, rateOfSnowfall, proportionOfSnowMeltingPerHour) << endl;

    return 0;
}