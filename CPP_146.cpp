#include <iostream>
#include <vector>

using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        string numStr = to_string(abs(num));
        if(num > 10 && (numStr[0] - '0') % 2 != 0 && (numStr[numStr.length() - 1] - '0') % 2 != 0){
            count++;
        }
    }
    return count;
}

int main(){
    // Test your code here
    return 0;
}