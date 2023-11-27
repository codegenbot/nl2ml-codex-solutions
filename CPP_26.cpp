#include <vector>
#include <algorithm>
#include <cassert>

vector<int> remove_duplicates(vector<int> numbers);

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        if(count(numbers.begin(), numbers.end(), numbers[i]) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 2, 3, 4, 4, 5}), {1, 3, 5}));
    assert(issame(remove_duplicates({1, 1, 2, 2, 3, 3, 4, 4, 5, 5}), {}));
    assert(issame(remove_duplicates({1, 2, 3, 4, 5}), {1, 2, 3, 4, 5}));
    assert(issame(remove_duplicates({}), {}));
    
    return 0;
}