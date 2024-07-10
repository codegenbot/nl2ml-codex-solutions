#include <iostream>
#include <iomanip>

using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;
    
    for (int i = 1; i <= min(n - 1, m - 1); ++i)
        p += (n - i) / total;
    
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
    return 0;
}