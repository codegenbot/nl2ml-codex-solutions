#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool are_vectors_equal(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_num = numbers[0];
    for (int i = 0; i < numbers.size(); ++i) {
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

int main() {
    assert(are_vectors_equal(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    cout << "Test passed successfully!" << endl;
    return 0;
}