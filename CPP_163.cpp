#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    int start = min(a, b);
    int end = max(a, b);
    for (int i = start; i <= end; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(generate_integers(1, 10), {2, 4, 6, 8, 10}));
    assert(!issame(generate_integers(1, 10), {1, 3, 5, 7, 9}));
    cout << "All tests passed!" << endl;
    return 0;
}