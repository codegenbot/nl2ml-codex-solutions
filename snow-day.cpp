int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        snow_on_ground = snow_on_ground - snow_on_ground * snow_melt_rate;
        if (snow_on_ground < 0.001) {
            snow_on_ground = 0;
        }
    }

    cout << snow_on_ground << endl;

    return 0;
}