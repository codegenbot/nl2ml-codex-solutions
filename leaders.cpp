#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> result;
    int maxRight = vec.back();
    for (int i = vec.size() - 2; i >= 0; --i) {
        if (vec[i] >= maxRight) {
            result.push_back(vec[i]);
            maxRight = vec[i];
        }
    }
    return result;
}

vector<int> leaders(vector<int>& vec) {
    vector<int> leaders;
    int rightMax = vec.back();
    for(int i = vec.size() - 1; i >= 0; i--) {
        if(vec[i] >= rightMax) {
            leaders.push_back(vec[i]);
            rightMax = vec[i];
        }
    }
    return leaders;
}

int main() {
    vector<int> input = {16, 17, 4, 3, 5, 2};
    vector<int> result = leaders(input);
    for(int num : result) {
        cout << num << " ";
    }
    return 0;
}