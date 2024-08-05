#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    vector<int> nums = {-3,2,-3,4,5,-2,6};
    int result = basement(nums);
    cout << "The first index with a negative sum is: " << result << endl;
    return 0;
}