```cpp
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    for(string s : a) {
        if(find(b.begin(), b.end(), s) == b.end()) 
            return false;
    }
    return true;
}

int main(){
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
}