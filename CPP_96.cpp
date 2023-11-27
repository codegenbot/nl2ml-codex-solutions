#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool issame(vector<int> a, vector<int> b){
    // function body
}

vector<int> count_up_to(int n){
    vector<int> primes;
    if(n < 2){
        return primes;
    }
    primes.push_back(2);
    for(int i=3; i<n; i+=2){
        bool isPrime = true;
        for(int j=3; j*j<=i; j+=2){
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

int main(){
    assert (issame(count_up_to(101) , {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));
    // rest of the code
    return 0;
}