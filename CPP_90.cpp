#include <vector>
#include <algorithm>
using namespace std;

int next_smallest(vector<int> lst){
    vector<int> v(lst);
    sort(v.begin(), v.end());
    if (v.size() < 2) {
        return -1;
    }
    for (int i = 0; i < v.size()-1; i++) {
        if (v[i] != v[i+1]) {
            return v[i+1];
        }
    }
    return -1;
}

int main(){
    assert (next_smallest({-35, 34, 12, -45}) == -35);
}