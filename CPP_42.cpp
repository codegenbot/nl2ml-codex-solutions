#include <vector>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) // If sizes are different, vectors are not the same
        return false;
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) // If any corresponding elements are different, vectors are not the same
            return false;
    }
    
    return true;
}

vector<int> incr_list(vector<int> l){
    for(int i=0; i<l.size(); i++){
        l[i]++;
    }
    return l;
}

int main(){
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}