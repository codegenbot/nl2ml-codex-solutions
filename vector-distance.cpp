#include <vector>
#include <iostream>
using namespace std;

double calculateEuclideanDistance(int n, vector<float> v1, vector<float> v2) {
    double distance = 0;
    for (int i = 0; i < n; i++) {
        float diff = v1[i] - v2[i];
        distance += pow(diff, 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    vector<float> v1(n), v2(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    
    double distance = calculateEuclideanDistance(n, v1, v2);
    cout << fixed << setprecision(10) << distance << endl;
    
    return 0;
}