#include <iostream>
#include <string>
#include <bitset>

std::string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return std::bitset<32>(sum).to_string().substr(32 - sum);
}

int main() {
    std::string result = solve(963);
    if (result == "10010") {
        std::cout << "Test Passed!" << std::endl;
    } else {
        std::cout << "Test Failed!" << std::endl;
    }

    return 0;
}