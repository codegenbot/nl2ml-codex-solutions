```c++
#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    for (int i = 0; i < hours; i++) {
        initialSnow = (initialSnow * (1 - meltingRate)) + snowFallRate;
    }
    return initialSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    cout << calculateSnow(hours, initialSnow, snowFallRate, meltingRate) << endl;
    return 0;
}
```