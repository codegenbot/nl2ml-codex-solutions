#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_array(vector<int> arr){
    sort(arr.begin(), arr.end(), [](int a, int b){
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    });
    return arr;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size()!=b.size()){
        return false;
    }
    for(int i=0;i<a.size();++i){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(issame(sort_array({2,4,8,16,32}), {2, 4, 8, 16, 32}));
    return 0;
}