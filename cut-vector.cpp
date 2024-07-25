#include <iostream>
#include <climits>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums;
    string line;
    
    getline(cin, line);
    istringstream iss(line);
    
    int num;
    while (iss >> num) {
        nums.push_back(num);
        iss.ignore();
    }
    
    int n = nums.size();
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int prefixSum = 0;
    int minDiff = INT_MAX/2; 
    int cutIndex = -1;
    
    for (int i = 0; i < n; i++) { 
        prefixSum += nums[i]; 
        int suffixSum = sum - prefixSum; 
        int diff = abs(prefixSum - suffixSum); 

        if (diff < minDiff) { 
            minDiff = diff; 
            cutIndex = i; 
        } 
    } 

    for (int i = 0; i <= cutIndex; i++) { 
        cout << nums[i] << ' '; 
    } 
    cout << '\n'; 

    if (cutIndex < n - 1) { 
        for (int i = cutIndex + 1; i <= n - 1; i++) { 
            cout << nums[i] << ' '; 
        } 
        cout << '\n'; 
    } 

    return 0;
}