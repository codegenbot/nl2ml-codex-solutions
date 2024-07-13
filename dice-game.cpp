#include <vector>
#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double total = (double)n * m;
    return (n - m) / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << getProbability(n, m) << endl;
    return 0;
}