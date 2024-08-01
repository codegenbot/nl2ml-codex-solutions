#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float meltingRate) {
    double totalSnow = 0;
    
    // Add snow and then melt it for each hour
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        totalSnow -= meltingRate * initialSnow;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfFall, meltingRate;

    cin >> hours >> initialSnow >> rateOfFall >> meltingRate;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltingRate);

    return 0;
}