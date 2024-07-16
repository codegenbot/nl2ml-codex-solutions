#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame(vector<int>({5, 3, 5, 2, 3, 3, 9, 0, 123}), vector<int>({0, 2, 3, 5, 9, 123}));
    
    return 0;
}