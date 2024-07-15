#include <vector>

int smallest_change(const std::vector<int>& arr) {
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(smallest_change({0, 1}) == 1); // Example test case
    return 0;
}