```cpp
#include <vector>
#include <cassert>
#include <cmath>
using namespace std;

std::vector<float> make_vector(const vector<float>& v) {
    return v;
}

bool isSame(vector<float> a,vector<float>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(abs(a[i]) != abs(b[i])) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            for(int k=i; k< l.size(); k=k+2){
                result[j++] = l[k];
            }
            sort(result.begin(),result.end());
            for(int i=0; i<4 && j<i+4;i++){
                result[i] = 0;
            }
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() { 
    vector<float> input = make_vector({5, 8, -12, 4, 23, 2, 3, 11, 12, -10});
    vector<float> expected = { -12, 8, 3, 4, 5, 2, 12, 11, 23, -10};
    assert(isSame(sort_even(input), expected));
    return 0;
}