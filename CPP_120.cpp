```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> temp = arr; // store array in a temporary vector
    std::priority_queue<int, std::vector<int>::iterator> pq(temp.rbegin(), temp.rend());
    std::vector<int> result;

    for(int i = 0; i < k && !pq.empty(); i++) {
        result.push_back(pq.top());
        pq.pop();
    }

    return result;
}

int main() {
    int n, k;
    std::cout << "Enter the size of array: ";
    std::cin >> n;

    std::cout << "Enter the value of k: ";
    std::cin >> k;

    std::vector<int> arr;
    std::cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element at index " << i << ": ";
        int val;
        std::cin >> val;
        arr.push_back(val);
    }

    std::vector<int> result = maximum(arr, k);
    std::cout << "Maximum elements: ";
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}