#include <iostream>

using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_added = snow_fall_rate - snow_on_ground * snow_melt_rate;
        float snow_melted = snow_on_ground * snow_melt_rate;
        snow_on_ground = snow_on_ground + snow_added - snow_melted;
    }

    cout << snow_on_ground << '\n';

    return 0;
}