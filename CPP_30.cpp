#include <vector>
#include <cassert>

using namespace std;

vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    // Test Case 1
    assert(issame(get_positive({}), {}));

    // Test Case 2
    assert(issame(get_positive({1.5, -2.7, 0.0, 4.2}), {1.5, 4.2}));

    // Test Case 3
    assert(issame(get_positive({-1.0, -3.5, -2.8}), {}));

    // Add more test cases here

    return 0;
}