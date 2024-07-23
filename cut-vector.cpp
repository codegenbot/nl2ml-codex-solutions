#include <vector>
#include <climits>  // for INT_MAX
#include <cmath>    // for abs
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    for (int i = 1; i <= v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        for (int j = i; j < v.size(); j++) {
            rightSum += v[j];
        }
        if (leftSum == rightSum) {
            return {{}, {v.begin(), v.end()}};
        } else if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }
    int leftSum = 0, rightSum = 0;
    for (int j = 0; j < cutIndex; j++) {
        leftSum += v[j];
    }
    for (int j = cutIndex; j < v.size(); j++) {
        rightSum += v[j];
    }
    return {{v.begin(), v.begin() + cutIndex}, {v.begin() + cutIndex, v.end()}};
}

int main() {
    pair<vector<int>, vector<int>> result = cutVector({1, 2, 3, 4, 5});
    return 0;
}