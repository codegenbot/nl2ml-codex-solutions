#include <vector>
#include <cassert>
using namespace std;


bool issame(vector<int> a, vector<int> b);
vector<int> count_up_to(int n);


bool issame(vector<int> a, vector<int> b){
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

vector<int> count_up_to(int n){
    vector<int> primes;
    for(int i=2; i<n; i++){
        bool isPrime = true;
        for(int j=2; j*j<=i; j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            primes.push_back(i);
        }
    }
    return primes;
}