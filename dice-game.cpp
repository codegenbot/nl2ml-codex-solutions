#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    double sum = 0.0;
    // Calculate probability where Peter rolls strictly higher than Colin
    for(int i = m; i < n; i++) {
        sum += (n - i) * 1 / (double)(n);
    }
    cout << fixed << setprecision(10) << sum << endl;

    return 0;
}