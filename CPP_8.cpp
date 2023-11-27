#include <vector>
#include <cassert>
using namespace std;

vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;

    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        product *= numbers[i];
    }

    vector<int> result;
    result.push_back(sum);
    result.push_back(product);

    return result;
}

bool is_same(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(is_same(sum_product({10}), {10, 10}));

    return 0;
}