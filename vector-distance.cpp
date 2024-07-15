#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(int n) {
    vector<float> x1(n), x2(n);
    
    for (int i = 0; i < n; i++) {
        float val;
        cin >> val;
        cin >> val;
        x1[i] = val; 
        x2[i] = val;
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(x2[i] - x1[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
}