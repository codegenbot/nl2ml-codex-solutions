#include <vector>

bool is_same(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> incr_list(vector<int> l){
    for(int i=0; i<l.size(); i++){
        l[i]++;
    }
    return l;
}

int main(){
    assert(is_same(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}