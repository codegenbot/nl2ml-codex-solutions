#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int max_right = arr.back();
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] >= max_right) {
            max_right = arr[i];
            result.push_back(max_right);
        }
    }
    return result;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int leader = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= leader) {
            leader = arr[i];
            result.push_back(leader);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leaders_result = leaders(arr);
    for (int leader : leaders_result) {
        cout << leader << " ";
    }
    return 0;
}