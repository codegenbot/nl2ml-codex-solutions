#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float snowFall, float meltRate) {
    return initialSnow + (snowFall * hours - meltRate * hours);
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFall, meltRate;
    cin >> initialSnow >> snowFall >> meltRate;
    cout << std::fixed << std::setprecision(6) << snowDay(hours, initialSnow, snowFall, meltRate) << endl;
    return 0; }