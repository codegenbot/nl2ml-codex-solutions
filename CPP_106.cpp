#include <vector>

bool issame(const vector<int>& a, const vector<int>& b);

vector<int> f(int n){
    vector<int> result;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            int factorial = 1;
            for (int j = 1; j <= i; ++j) {
                factorial *= j;
            }
            result.push_back(factorial);
        } else {
            int sum = 0;
            for (int j = 1; j <= i; ++j) {
                sum += j;
            }
            result.push_back(sum);
        }
    }
    return result;
}

int main() {
    assert(issame(f(3), {1, 2, 6}));
}