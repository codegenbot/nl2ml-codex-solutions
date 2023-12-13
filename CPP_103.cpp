```cpp
#include <string>
#include <cassert>
#include <cmath>

using namespace std;

string rounded_avg(int n, int m);

string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }

    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    int avg = round(sum / static_cast<double>(m - n + 1));

    string binary = "";
    while (avg > 0) {
        binary = to_string(avg % 2) + binary;
        avg /= 2;
    }

    return binary;
}
```