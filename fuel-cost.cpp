#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;

    int n;
    while (cin >> n) {
        nums.push_back(n);
        if (cin.peek() == '\n') break;
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += (num / 3) - 2 + 2*num;
    }
    
    cout << sum << endl;
    
    return 0;
}