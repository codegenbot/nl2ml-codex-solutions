#include <cassert>
#include <bitset>
#include <cmath>
#include <string>

std::string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    int avg = round((double)sum / (m - n + 1));
    return std::bitset<32>(avg).to_string().substr(32 - (int)log2(avg) - 1);
}

int main() {
    assert(rounded_avg(5, 5) == "101");
    return 0;
}