// Include necessary headers
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Define 'even_odd_palindrome' function
std::vector<int> even_odd_palindrome(int n) {
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        std::string num = std::to_string(i);
        std::string rev_num = num;
        std::reverse(rev_num.begin(), rev_num.end());
        if (num == rev_num) {
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    return {even, odd};
}

// Define 'issame' function
bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    // Add a test case
    assert (issame(even_odd_palindrome(1) , {0, 1}));

    return 0;
}