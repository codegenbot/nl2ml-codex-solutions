#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double vectorDistance(int n, const vector<float>& v1, const vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        double diff = v2[i] - v1[i];
        sum += pow(diff, 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for (int i = 0; i < n; ++i) {
        cin >> v1[i] >> v2[i];
    }

    cout << fixed << setprecision(10) << vectorDistance(n, v1, v2) << endl;

    return 0;
}