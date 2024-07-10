#include <vector>

using namespace std;

int specialFilter(const vector<int>& nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            string num_str = to_string(abs(num));
            if (num_str.front() % 2 != 0 && num_str.back() % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

int main(){
    assert(specialFilter({}) == 0);
    return 0;
}