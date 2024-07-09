```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result;
    result.reserve(l.size());
    auto it = unique_copy(l.begin(), l.end(), back_inserter(result));
    return result;
}

int main() {
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> output = unique(input);
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}