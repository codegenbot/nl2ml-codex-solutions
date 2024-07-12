#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double p = 0;
    for (int i = 1; i <= m; i++) {
        p += (n - i) / (double)(n * m);
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}