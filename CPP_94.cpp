```cpp
#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst){
    int maxPrime = 0;
    for(int i : lst){
        if(i > 1 && isPrime(i)){
            if(maxPrime < i) maxPrime = i;
        }
    }
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    std::vector<int> lst;
    int num;
    
    cout << "Enter the numbers (separated by space): ";
    while(cin >> num) {
        lst.push_back(num);
    }
    cout << "Sum of digits for max prime is: " << skjkasdkd(lst) << endl;
    return 0;
}