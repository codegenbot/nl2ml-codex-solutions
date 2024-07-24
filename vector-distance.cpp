#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    float vec1[n];
    float vec2[n];

    // Read input vectors
    for (int i = 0; i < n; i++) {
        cin >> vec1[i] >> vec2[i];
    }

    double distance = 0.0;
    for (int i = 0; i < n; i++) {
        distance += pow(vec1[i] - vec2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    cout << fixed << setprecision(10) << vectorDistance(n) << endl;

    return 0;
}