#include <vector>
#include <iostream>
#include <cassert>

namespace mynamespace {
    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }

    std::vector<int> pluck(std::vector<int> arr) {
        int smallestEven = -1;
        int smallestEvenIndex = -1;

        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] % 2 == 0 && (smallestEven == -1 || arr[i] < smallestEven)) {
                smallestEven = arr[i];
                smallestEvenIndex = i;
            }
        }

        if(smallestEvenIndex == -1) {
            return {};
        } else {
            return {smallestEven};
        }
    }
}

int main() {
    using namespace std;

    std::vector<int> nums {3, 1, 4, 1, 5, 9, 2, 6, 5};

    std::vector<int> result = mynamespace::pluck(nums);
    
    for(auto num : result) {
        cout << num << " ";
    }

    assert(mynamespace::issame(mynamespace::pluck({7, 9, 7, 1}), {}));

    return 0;
}