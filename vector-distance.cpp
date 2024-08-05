#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    float v1[n], v2[n];
    
    // Read input vectors
    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }
    
    double sum = 0.0;
    
    // Calculate Euclidean distance
    for (int i = 0; i < n; i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    double dist = vectorDistance(n);
    
    // Print output
    cout << fixed << setprecision(10) << dist << endl;
    
    return 0;
}