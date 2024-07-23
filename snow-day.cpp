#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float meltingRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowfall > 0.0)
            totalSnow += rateOfSnowfall;
        totalSnow -= meltingRate * initialSnow;
        initialSnow = totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, meltingRate;

    cin >> hours >> initialSnow >> rateOfSnowfall >> meltingRate;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, meltingRate);

    return 0;
}