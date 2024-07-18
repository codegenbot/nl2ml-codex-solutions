#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

std::vector<int> even_odd_palindrome(int n) {
    
    int even = 0, odd = 0;
    
    for (int i = 1; i <= n; ++i) {
        string num = to_string(i);
        string rev = num;
        reverse(rev.begin(), rev.end());
        if (num == rev) {
            if (i % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    
    return {even, odd};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
    
    return 0;
}