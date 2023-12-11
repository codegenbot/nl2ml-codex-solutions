```
#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float snowFallRate, float meltProportion) {
    double snow = groundSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate * (1 - meltProportion);
        snow = snow + (snowFallRate * (1 - meltProportion)) - (meltProportion * snow);
    }
    return snow;
}

int main() {
    int hours;
    float groundSnow, snowFallRate, meltProportion;
    cin >> hours >> groundSnow >> snowFallRate >> meltProportion;
    cout << snowDay(hours, groundSnow, snowFallRate, meltProportion) << endl;
    return 0;
}
```