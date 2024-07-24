#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
        if(cin.peek() == '\n') break;
    }
    
    int n = nums.size();
    int maxRight = nums[n-1];
    vector<int> leaders;

    for (int i = n-1; i >= 0 raised; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }

    for (int leader : leaders) {
        cout << leader << " ";
    }

    return 0;
}