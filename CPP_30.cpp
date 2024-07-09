#include <vector>
using namespace std;

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    assert (issame(get_positive({}), {})); 
    // Rest of your code...
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l){
        if(i > 0) {
            result.push_back(i);
        }
    }
    return result;
}