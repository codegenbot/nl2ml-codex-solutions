#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i <= min(n,m); i++) {
        if(i < m) total += 1.0 / m;
        else total += 1.0 - (n-m)/(double)(n*m);
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}