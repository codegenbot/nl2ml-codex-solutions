#include <vector>
using namespace std;

int maxPrime(int n){
    int maxPrime = 0;
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            if(maxPrime < i){
                maxPrime = i;
            }
        }
    }
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}