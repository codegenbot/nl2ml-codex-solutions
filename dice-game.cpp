#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    return (n - 1) / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n, m);
    return 0;
}