```cpp
#include <iostream>
#include <string>
#include <cassert>
#include <cmath> // Include cmath for round function

std::string rounded_avg(int n, int m) {
    if (n > m)
        return "-1";
    double sum = 0;
    for (int i = n; i <= m; i++)
        sum += i;
    double avg = std::round(sum / (double)(m - n + 1));
    std::string res;
    while (avg > 0) {
        if (avg % 2 == 1)
            res.push_back('1');
        else
            res.push_back('0');
        avg /= 2;
    }
    return res;
}