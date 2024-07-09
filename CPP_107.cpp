#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    for(int i = 1; i <= n; ++i) {
        result.push_back(i % 2 == 0 ? 0 : 1);
    }
    return result;
}

int main() {
    assert(issame(even_odd_palindrome(1), std::vector<int>{0, 1}));
    return 0;
}