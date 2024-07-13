#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateOfFall, float meltingRate) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        totalSnow -= meltingRate * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfFall, meltingRate;
    cin >> groundSnow >> rateOfFall >> meltingRate;
    double result = snowDay(hours, groundSnow, rateOfFall, meltingRate);
    cout << fixed << setprecision(10) << result << endl;
    return 0;
}