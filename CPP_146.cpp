```cpp
#include <iostream>
#include <vector>

using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0){
            count++;
        }
    }
    return count;
}

int main(){
    assert(specialFilter({}) == 0);
    vector<int> numbers = {12,23,34,45,56,67,78};
    cout << specialFilter(numbers) << endl;
    return 0;
}