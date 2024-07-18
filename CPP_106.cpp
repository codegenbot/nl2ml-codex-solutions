#include <vector>
#include <cassert>

std::vector<int> f(int n){
    std::vector<int> result(n);
    int sum = 0;
    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            factorial *= i;
            result[i - 1] = factorial;
        } else {
            sum += i;
            result[i - 1] = sum;
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(f(3), {1, 2, 6}));
    return 0;
}