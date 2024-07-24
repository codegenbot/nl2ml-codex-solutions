#include <iostream>
#include <iomanip>

using namespace std;

double solve(int n, int m) {
    double total = 0.0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if(j <= m) continue;
            total += 1.0 / n / m;
        }
    }
    return 1 - total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << solve(n, m) << endl;
    return 0;
}