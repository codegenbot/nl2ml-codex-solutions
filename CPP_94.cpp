#include <vector>

int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int i: lst){
        if(isPrime(i) && i > maxPrime)
            maxPrime = i;
    }
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;

int main() {
    assert(skjkasdkd({127, 97, 8192}) == 10);
    return 0;
}