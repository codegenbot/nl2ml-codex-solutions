#include <vector>

vector<int> factorize(int n){
    vector<int> factors;
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
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
    vector<int> result = factorize(60);
    for(int num : result) {
        cout << num << " ";
    }
    return 0;
}