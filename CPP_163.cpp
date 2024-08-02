#include <vector>
#include <cassert>

vector<int> generate_integers(int a, int b){
    vector<int> result;
    for(int i = a; i <= b; i++){
        if(i % 2 == 0){
            result.push_back(i);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> result = generate_integers(1, 10);
    vector<int> expected_result = {2, 4, 6, 8, 10};
    assert(issame(result, expected_result));
    return 0;
}