#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double p = 0;
    for (int i = 1; i <= n; i++) {
        p += (n - i + 1.0) / (n * 1.0) * (m - i + 1.0) / (m * 1.0);
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}