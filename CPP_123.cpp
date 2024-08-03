#include <vector>
#include <algorithm>
using namespace std;

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    std::vector<int> odd_result;
    for (int num : result) {
        if (num % 2 != 0) {
            odd_result.push_back(num);
        }
    }
    std::sort(odd_result.begin(), odd_result.end());
    return odd_result;
}