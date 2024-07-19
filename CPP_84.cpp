#include <iostream>
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
    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;
    std::cout << solve(num) << std::endl;
    return 0;
}