#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

std::vector<int> leaders(std::vector<int>& v) {
    std::vector<int> res;
    int rightmost = v.back();
    res.push_back(rightmost);
    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= rightmost) {
            rightmost = v[i];
        }
        res.push_back(rightmost);
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> v = {1, 3, 4, 2, 8};
    std::vector<int> res;
    res = leaders(v);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}