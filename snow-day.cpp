#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    snow_on_ground = snow_on_ground + (snow_fall_rate - snow_melt_rate) * hours - snow_melt_rate * hours;

    cout << snow_on_ground << '\n';

    return 0;
}