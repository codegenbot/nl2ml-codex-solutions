#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    assert(issame(by_length({9, 4, 8}) , vector<string>({"Nine", "Four", "Eight"})));
    // ...your code...
    return 0;
}