```cpp
#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst){
    int maxPrime = 0;
    for(int num : lst){
        if(isPrime(num) && num > maxPrime)
            maxPrime = num;
    }
    int sum = 0;
    while(maxPrime > 0){
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return true;

int main(){
    assert (skjkasdkd({127, 97, 8192}) == 10);
    return 0;
}