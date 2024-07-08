#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float initialSnow, float snowFallRate, float meltRate) {
    return initialSnow + (snowFallRate * hours - meltRate * hours);
}

int main() {
    int h;
    cin >> h;
    float s1, r, m;
    cin >> s1 >> r >> m;
    cout << setprecision(10) << fixed << snowDay(h, s1, r, m) << endl;
    return 0;
}