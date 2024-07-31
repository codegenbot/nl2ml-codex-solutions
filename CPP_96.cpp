#include <vector>

vector<int> count_up_to(int n);

bool issame(vector<int> a, vector<int> b);

vector<int> count_up_to(int n) {
    vector<int> result;
    if(n < 2) return result;
    
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    
    for(int i = 2; i * i < n; ++i){
        if(isPrime[i]){
            for(int j = i * i; j < n; j += i){
                isPrime[j] = false;
            }
        }
    }
    
    for(int i = 2; i < n; ++i){
        if(isPrime[i]){
            result.push_back(i);
        }
    }
    
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(count_up_to(101), vector<int>{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));
    return 0;
}