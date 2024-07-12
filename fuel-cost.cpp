#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums;

    int n;
    while (!cin.eof()) {
        cin >> n;
        nums.push_back(n);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += (num / 3) - 2;
    }
    
    cout << sum << endl;
    
    return 0;
}