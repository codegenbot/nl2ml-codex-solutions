#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    cin >> n;
    vector<float> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    float distance = 0.0;
    for (int i = 0; i < n; ++i) {
        distance += pow(vec1[i] - vec2[i], 2);
    }

    distance = sqrt(distance);
    cout << fixed << setprecision(6) << distance << "\n";

    return 0;
}