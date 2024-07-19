#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return (a == b);
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int smallest_even = -1;
    int smallest_even_index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && (smallest_even == -1 || arr[i] < smallest_even)) {
            smallest_even = arr[i];
            smallest_even_index = i;
        }
    }

    if (smallest_even != -1) {
        result.push_back(smallest_even);
        result.push_back(smallest_even_index);
    }

    return result;
}

int main() {
    vector<int> input = {1, 3, 6, 2, 8, 4};
    vector<int> output = pluck(input);
    assert(issame(output, {2, 3}));
    return 0;
}