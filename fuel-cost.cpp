#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int input;
    while (cin.peek() != EOF) {
        cin >> input;
        nums.push_back(input);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += (num / 3) - 2;
    }
    
    cout << sum << endl;
    
    return 0;
}