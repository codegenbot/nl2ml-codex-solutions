#include <iostream>
#include <bitset>
#include <string>
#include <cassert>

std::string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return std::bitset<32>(sum).to_string().substr(32 - sum);
}

int main() {
    assert(solve(963) == "10010");
    return 0;
}