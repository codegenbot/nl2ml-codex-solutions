#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, melting_proportion;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> melting_proportion;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        snow_on_ground -= snow_on_ground * melting_proportion;
    }

    cout << snow_on_ground << '\n';

    return 0;
}