#include <iostream>
#include <string>
#include <cassert>
#include <cmath>

std::string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }

    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    int avg = std::round(sum / (m - n + 1.0));

    std::string binary_avg = "";
    while (avg > 0) {
        binary_avg = std::to_string(avg % 2) + binary_avg;
        avg /= 2;
    }

    if (binary_avg == "") {
        binary_avg = "0";
    }

    return binary_avg;
}

int main() {
    assert (rounded_avg(5, 5) == "101");
    return 0;
}