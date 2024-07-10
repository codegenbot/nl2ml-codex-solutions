#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    double a[n], b[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    
    double sum = 0.0;
    
    for (int i = 0; i < n; i++) {
        sum += pow(a[i] - b[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}