#include <vector>
#include <iostream>
using namespace std;

double vectorDistance(int n) {
    float x1[n], x2[n];
    
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    
    double distance = 0.0;
    
    for (int i = 0; i < n; i++) {
        distance += pow((x2[i] - x1[i]), 2);
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    
    return 0;
}