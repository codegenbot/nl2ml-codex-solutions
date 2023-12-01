#include <vector>
#include <cassert>

using namespace std;

vector<int> factorize(int n){
    vector<int> factors;
    for(int i=2; i<=n; i++){
        while(n%i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

bool issame(const vector<int>& a, const vector<int>& b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert (issame(factorize(3 * 2 * 3) , {2, 3, 3}));
    
    return 0;
}