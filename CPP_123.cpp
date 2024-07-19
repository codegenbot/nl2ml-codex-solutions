#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b);
vector<int> get_odd_collatz(int n);

bool issame(vector<int> a, vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);

    vector<int> odd_numbers;
    for (int num : result) {
        if (num % 2 != 0) {
            odd_numbers.push_back(num);
        }
    }

    sort(odd_numbers.begin(), odd_numbers.end());
    
    return odd_numbers;
}

int main() {
    assert(std::equal(get_odd_collatz(1).begin(), get_odd_collatz(1).end(), std::vector<int>{1}.begin()));
    return 0;
}