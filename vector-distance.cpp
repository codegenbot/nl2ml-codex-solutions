#include <vector>
#include <iostream>
using namespace std;

double vectorDistance(int n) {
    double sum = 0;
    float v1[n], v2[n];

    // Read first vector from user
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    // Read second vector from user
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    // Calculate Euclidean distance between the two vectors
    for (int i = 0; i < n; i++) {
        sum += pow(v1[i] - v2[i], 2);
    }

    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    cout << fixed << setprecision(10) << vectorDistance(n) << endl;

    return 0;
}