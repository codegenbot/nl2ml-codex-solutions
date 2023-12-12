```cpp
#include <iostream>
#include <iomanip>
using namespace std;

double probability(int n, int m) {
    double total_outcomes = n * m;
    double favorable_outcomes = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorable_outcomes++;
            }
        }
    }

    return favorable_outcomes / total_outcomes;
}

int main() {
    int n, m;
    cin >> n >> m;

    double result = probability(n, m);

    cout << fixed << setprecision(8);
    cout << result << endl;

    return 0;
}
```