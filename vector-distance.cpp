#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance() {
    int n;
    cin >> n;

    double v1[n];
    double v2[n];

    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }

    double distance = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = pow(v2[i] - v1[i], 2);
        distance += diff;
    }
    return sqrt(distance);

}

int main() {
    cout << fixed << setprecision(10) << vectorDistance() << endl;

    return 0;
}