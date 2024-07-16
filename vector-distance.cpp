#include <iostream>
#include <vector>
using namespace std;

double vectorDistance(int n) {
    double x1[n], y1[n];
    for (int i = 0; i < n; ++i) {
        cin >> x1[i] >> y1[i];
    }
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double diff = (x1[i] - y1[i]);
        sum += diff * diff;
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;