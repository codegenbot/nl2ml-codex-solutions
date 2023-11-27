#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<float> sort_even(vector<float> l){
    vector<float> result;
    vector<float> even_indices;
    
    for(int i=0; i<l.size(); i++){
        if(i % 2 == 0){
            even_indices.push_back(l[i]);
        }
        result.push_back(l[i]);
    }
    
    sort(even_indices.begin(), even_indices.end());
    
    int j = 0;
    for(int i=0; i<result.size(); i++){
        if(i % 2 == 0){
            result[i] = even_indices[j];
            j++;
        }
    }
    
    return result;
}

bool issame(vector<float> a, vector<float> b){
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

int main(){
    assert (issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    
    return 0;
}