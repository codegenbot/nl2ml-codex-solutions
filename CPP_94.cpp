```cpp
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int maxPrime(vector<int> lst){
    int maxPrime = 0;
    for(int i : lst){
        if(isPrime(i) && i > maxPrime)
            maxPrime = i;
    }
    return maxPrime;

int sumOfDigits(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;

int main() {
    vector<int> lst;
    int num, i;
    cout << "Enter the number of elements in the list: ";
    cin >> num;
    for(i = 0; i < num; i++){
        cout << "Enter element " << i+1 << ": ";
        int x; 
        cin >> x; 
        lst.push_back(x);
    }
    int maxPrimeNum = maxPrime(lst);
    if(maxPrimeNum > 0)
        cout << "The sum of digits of the maximum prime is: " << sumOfDigits(maxPrimeNum) << endl;
    else
        cout << "No primes found in the list." << endl;
    return 0;
}