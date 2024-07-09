#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> pluck(std::vector<int> arr) {
    vector<int> result;
    if (arr.empty()) {
        return result;
    }
    int smallest = INT_MAX;
    int index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest) {
            smallest = arr[i];
            index = i;
        }
    }
    result.push_back(smallest);
    result.push_back(index);
    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}) , std::vector<int>{0, 1}));
    return 0;
}