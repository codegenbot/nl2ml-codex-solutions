#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i && j <= m; j++) {
            p += 1.0 / total;
        }
    }
    
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}