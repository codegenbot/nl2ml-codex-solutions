#include <vector>
#include <iostream>

std::vector<int> pluck(std::vector<int>& arr) {
    std::vector<int> result;
    if (arr.empty()) 
        return result;

    int smallest_even = INT_MAX;
    int index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index = i;
        }
    }

    result.push_back(smallest_even);
    result.push_back(index);

    return result;

}

int main() {
    assert(pluck({7, 9, 7, 1}) == std::vector<int>({0}));
}