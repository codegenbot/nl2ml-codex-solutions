```
#include <vector>
using namespace std;

int findFirstNegativeIndex(vector<int> &nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> numbers = {-2, 3, -4};
    cout << findFirstNegativeIndex(numbers) << endl;
    return 0;
}