```cpp
#include <vector>
#include <cmath>
using namespace std;

int do_algebra(vector<string>, vector<int>);

int do_algebra(vector<string> ops, vector<int> nums) {
    int result = 0;
    int temp = 1;

    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += temp * nums[i];
        } else if (ops[i] == "-") {
            result -= temp * nums[i];
        } else if (ops[i] == "*") {
            temp *= nums[i];
        } else if (ops[i] == "//") {
            temp = temp / nums[i];
        } else if (ops[i] == "**") {
            temp = pow(temp, nums[i]);
        }
    }

    return result;
}