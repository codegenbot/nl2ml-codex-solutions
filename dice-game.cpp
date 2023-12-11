```cpp
#include <iostream>
using namespace std;

long double probability(int n, int m) {
    long double total_outcomes = n * (long double)m;
    long double favorable_outcomes = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorable_outcomes++;
            }
        }
    }
    
    long double result = favorable_outcomes / total_outcomes;
    return result;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    long double result = probability(n, m);
    cout << result << endl;
    
    return 0;
}
```