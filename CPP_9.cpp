#include <vector>
#include <cassert>

vector<int> rolling_max(vector<int> numbers) {
    vector<int> rollingMax;
    int currentMax = numbers[0];
    rollingMax.push_back(currentMax);

    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > currentMax) {
            currentMax = numbers[i];
        }
        rollingMax.push_back(currentMax);
    }

    return rollingMax;
}

bool issame(vector<int> a, vector<int> b);

int main() {
    vector<int> rolling_max = rolling_max({3, 2, 3, 100, 3});
    assert(issame(rolling_max, {3, 3, 3, 100, 100}));

    return 0;
}