#include <vector>
#include <initializer_list>

int main() {
    std::vector<int> arr = {1, 3, 4, 2};
    auto res = leaders(arr);
    for (int x : res) {
        std::cout << x << " ";
    }
    return 0;
}

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;

    for(int i=0; i<n; i++) {
        if(i == n-1 || arr[i] >= arr.back()) {
            res.push_back(arr[i]);
        }
    }

    return res;
}