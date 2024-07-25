#include <iostream>
#include <string>
using namespace std;

string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    string binarySum = "";
    while (sum > 0) {
        binarySum = to_string(sum % 2) + binarySum;
        sum /= 2;
    }
    return binarySum;
}

int main() {
    assert(solve(963) == "10010");
    return 0;
}