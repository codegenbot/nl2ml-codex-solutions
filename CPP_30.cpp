#include <vector>
using namespace std;

bool issame(vector<float> a,vector<float>b){
    if(a.size() != b.size()) return false;
    for(float i : a) {
        bool found = false;
        for(float j : b) {
            if(i == j) {
                found = true; break;
            }
        }
        if(!found) return false;
    }
    return true;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float i : l) {
        if(i > 0)
            result.push_back(i);
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), {})); 
    return 0;
}