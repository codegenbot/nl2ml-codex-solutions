#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> intersperse(vector<int> numbers, int delimeter) {
    vector<int> result;
    if (numbers.empty()) return result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        result.push_back(numbers[i]);
        if (i != numbers.size() - 1) {
            result.push_back(delimeter);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(intersperse({1, 2, 3}, 0), {1, 0, 2, 0, 3}));
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    assert(issame(intersperse({1}, 0), {1}));
    assert(issame(intersperse({}, 1), {}));
    
    cout << "All tests passed!" << endl;
    return 0;
}