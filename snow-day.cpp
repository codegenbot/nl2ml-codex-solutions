#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMelting) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow *= (1 - proportionMelting); 
        totalSnow += rateOfSnowfall; 
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionMelting;
    cin >> initialSnow >> rateOfSnowfall >> proportionMelting;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionMelting) << endl;
    return 0;
}