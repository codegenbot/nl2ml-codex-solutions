#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> sort_array(vector<int> array);

vector<int> sort_array(vector<int> array){
    if(array.empty()) return array;

    if((array.front() + array.back()) % 2 == 0){
        sort(array.begin(), array.end(), greater<int>());
    } else {
        sort(array.begin(), array.end());
    }

    return array;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) return false;
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }

    return true;
}

int main(){
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    
    return 0;
}