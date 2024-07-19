#include <vector>
#include <cassert>

using namespace std;

namespace Solution {
    vector<int> sum_product(vector<int> nums) {
        int sum = 0, product = 1;
        for (int num : nums) {
            sum += num;
            product *= num;
        }
        return {sum, product};
    }
}

int contest_main(){
    assert(Solution::sum_product({10, 10}) == vector<int>{20, 100});
    assert(Solution::sum_product({10}) == vector<int>{10, 10});
    return 0;
}