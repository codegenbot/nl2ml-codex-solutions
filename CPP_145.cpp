#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> order_by_points(vector<int> nums){
    vector<pair<int, int>> sums;
    for(int i=0; i<nums.size(); i++){
        int sum = 0;
        int num = abs(nums[i]);
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        sums.push_back(make_pair(sum, i));
    }
    sort(sums.begin(), sums.end());
    vector<int> result;
    for(auto p : sums){
        result.push_back(nums[p.second]);
    }
    return result;
}

int main(){
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}