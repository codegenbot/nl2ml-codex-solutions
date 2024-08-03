#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rate, float melt) {
    double totalSnow = 0;
    for (int i = 0; i < hours; ++i) {
        totalSnow += rate;
        totalSnow -= melt * (totalSnow > 0);
    }
    return totalSnow;
}

int main() {
    int h;
    cin >> h;
    float g, r, m;
    cin >> g >> r >> m;
    cout << fixed << setprecision(10) << snowDay(h, g, r, m) << endl;
    return 0;
}