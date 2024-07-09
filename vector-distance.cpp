#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    float v1[n];
    float v2[n];

    // Read input vectors
    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }

    double distance = 0.0;
    for (int i = 0; i < n; i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    cout << fixed << setprecision(10) << vectorDistance(n);

    return 0;
}