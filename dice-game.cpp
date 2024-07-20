#include <iostream>
using namespace std;

#include <iomanip>

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < m; j++) {
            if(i > j) {
                p += 1.0;
            }
        }
    }
    
    return p / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
    return 0;