#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(vector<float> v1, vector<float> v2) {
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    cin >> n;
    vector<float> v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    cout << fixed << setprecision(10) << vectorDistance(v1, v2) << endl;

    return 0;
}