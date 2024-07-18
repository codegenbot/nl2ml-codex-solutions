#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

vector<int> get_odd_collatz(int n);

bool is_same(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);

    vector<int> odd_result;
    for (int num : result) {
        if (num % 2 != 0) {
            odd_result.push_back(num);
        }
    }

    sort(odd_result.begin(), odd_result.end());

    return odd_result;
}

int main() {
    if (is_same(get_odd_collatz(1), {1})) {
        std::cout << "Test Passed" << std::endl;
    } else {
        std::cout << "Test Failed" << std::endl;
    }
}