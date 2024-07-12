#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    int prefixSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < n - 1; i++) {
        prefixSum += nums[i];
        int suffixSum = sum - prefixSum;
        int diff = abs(prefixSum - suffixSum);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    vector<int> firstSubvector;
    vector<int> secondSubvector;

    for (int i = 0; i < cutIndex + 1; i++) {
        firstSubvector.push_back(nums[i]);
    }

    for (int i = cutIndex + 1; i < n; i++) {
        secondSubvector.push_back(nums[i]);
    }

    for (int num : firstSubvector) {
        cout << num << " ";
    }
    cout << endl;
    for (int num : secondSubvector) {
        cout << num << " ";
    }

    return 0;
}