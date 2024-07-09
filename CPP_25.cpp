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

int main(){
    int num;
    cin >> num;
    vector<int> result = factorize(num);
    for(int val : result){
        cout << val << " ";
    }
    return 0;
}