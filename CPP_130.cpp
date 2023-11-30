#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> tri(int n){
    vector<int> result;
    if(n >= 0){
        result.push_back(3);
        if(n >= 1){
            result.push_back(1);
            if(n >= 2){
                result.push_back(n/2 + 1);
                for(int i = 3; i <= n; i++){
                    if(i % 2 == 0){
                        result.push_back(1 + i/2);
                    }
                    else{
                        result.push_back(result[i-1] + result[i-2] + result[i+1]);
                    }
                }
            }
        }
    }
    return result;
}

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

int main() {
    assert (issame(tri(1) , {1, 3}));
    assert (issame(tri(2) , {1, 3, 2}));
    assert (issame(tri(3) , {1, 3, 2, 2}));
    assert (issame(tri(4) , {1, 3, 2, 2, 3}));
    
    return 0;
}