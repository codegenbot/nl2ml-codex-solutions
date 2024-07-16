#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> result(2, 0);
    for (int i = 1; i <= n; ++i) {
        std::string num = std::to_string(i);
        std::string rev_num = num;
        std::reverse(rev_num.begin(), rev_num.end());
        if (num == rev_num) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

assert(issame(even_odd_palindrome(1), {0, 1}));