#include <vector>
#include <iostream>
using namespace std;

double vectorDistance(int n) {
    double x1[20], x2[20];
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(x1[i] - x2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}