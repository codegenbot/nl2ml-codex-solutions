#include <vector>
#include <cassert>

vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for(auto num : l){
        if(num > 0){
            positive_nums.push_back(num);
        }
    }
    return positive_nums;
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
    assert(issame(get_positive({}), {}));
    return 0;
}