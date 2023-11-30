#include <iostream>
#include <iomanip>

using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * (1 - meltRate);
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> meltRate;
    
    float finalSnow = calculateSnow(hours, snowOnGround, snowFallRate, meltRate);
    cout << fixed << setprecision(15) << finalSnow << endl;
    
    return 0;
}