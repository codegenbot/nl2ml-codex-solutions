#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateOfFall, float meltRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        totalSnow -= meltRate * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfFall, meltRate;
    cin >> groundSnow >> rateOfFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfFall, meltRate) << endl;
    return 0;
}