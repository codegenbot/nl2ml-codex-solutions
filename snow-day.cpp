#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float total_snow_fall = snow_fall_rate * (1 - snow_melt_rate);
        snow_on_ground += total_snow_fall;
        snow_on_ground -= snow_melt_rate;
    }

    cout << fixed << snow_on_ground << '\n';

    return 0;
}