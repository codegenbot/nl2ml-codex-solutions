#include <vector>
#include <algorithm>
#include <iterator>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) return false;
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    return a == b;
}

vector<int> common(vector<int> l1, vector<int> l2){
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));

    result.erase(unique(result.begin(), result.end()), result.end());

    return result;
}

int main(){
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}