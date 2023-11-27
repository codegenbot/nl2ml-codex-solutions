#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> factorize(int n){
    std::vector<int> factors;
    for(int i = 2; i <= n; i++){
        while(n % i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

int main(){
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    // more test cases...
    return 0;
}