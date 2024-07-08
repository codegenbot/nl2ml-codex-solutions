```cpp
#include <vector>
#include <utility>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<std::pair<int, int>> findMinEvenNode(std::vector<int> arr) {
    std::vector<std::pair<int, int>> evenNodes;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evenNodes.push_back({arr[i], i});
        }
    }

    if (evenNodes.empty()) {
        return {};
    }

    int minEvenValue = evenNodes[0].first;
    int minIndex = evenNodes[0].second;

    for (int i = 1; i < evenNodes.size(); i++) {
        if (evenNodes[i].first < minEvenValue) {
            minEvenValue = evenNodes[i].first;
            minIndex = evenNodes[i].second;
        } else if (evenNodes[i].first == minEvenValue) {
            minIndex = std::min(minIndex, evenNodes[i].second);
        }
    }

    std::vector<std::pair<int, int>> result;
    result.push_back({minEvenValue, minIndex});
    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
}