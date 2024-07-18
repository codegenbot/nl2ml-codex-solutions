#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> get_odd_collatz(int n);

bool is_same_vector(vector<int> a, vector<int> b) {
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
    assert(is_same_vector(get_odd_collatz(1), {1}));
}