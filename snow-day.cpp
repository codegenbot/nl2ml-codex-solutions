#include <iostream>
using namespace std;

float calculateSnowOnGround(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= meltingRate * snowOnGround;
    }
    return snowOnGround;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    float result = calculateSnowOnGround(hours, initialSnow, snowFallRate, meltingRate);
    cout << result << endl;
    return 0;
}