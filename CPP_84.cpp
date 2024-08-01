#include <iostream>
#include <string>
#include <bitset>
#include <cassert>

using namespace std;

string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return bitset<8>(sum).to_string().substr(8 - sum);
}

int main() {
    assert(solve(963) == "10010");
    return 0;
}