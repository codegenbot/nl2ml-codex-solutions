#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow, rate, melt;
    cin >> hours >> snow >> rate >> melt;

    float finalSnow = snow;
    for (int i = 0; i < hours; ++i) {
        finalSnow = finalSnow + rate - (melt * finalSnow);
    }

    cout << finalSnow << endl;

    return 0;
}