#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    assert(issame(factorize(3 * 2 * 3) , {2, 3, 3}));
    return 0;
}