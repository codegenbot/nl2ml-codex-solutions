#include <iostream>
#include <vector>
#include <cassert>

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool is_same(const vector<int>& a, const vector<int>& b){
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int test() {
    assert(is_same(generate_integers(17, 88), {}));
    return 0;
}