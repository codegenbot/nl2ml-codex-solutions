#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

double vectorDistance(int n) {
    double sum = 0;
    cin >> n; // Read n
    for (int i = 0; i < n; i++) {
        double x1, x2;
        cin >> x1 >> x2;
        sum += pow(x2 - x1, 2);
    }
    return sqrt(sum); 
}

int main() {
    int n;
    cin >> n;
    double result = vectorDistance(n);
    cout << fixed << setprecision(10) << result; 
    return 0;
}