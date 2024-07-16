#include <vector>
#include <cassert>

vector<int> factorize(int n);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> factorize(int n){
    vector<int> factors;
    for(int i=2; i*i<=n; i++){
        while(n%i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    if(n > 1){
        factors.push_back(n);
    }
    return factors;
}

int main() {
    // Add test cases here if needed
    return 0;
}