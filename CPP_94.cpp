#include<bits/stdc++.h>
using namespace std;

int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int num : lst) {
        if(isPrime(num)) {
            if(num > maxPrime)
                maxPrime = num;
        }
    }
    int sumOfDigits = 0;
    while(maxPrime > 0) {
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

bool isPrime(int n) {
    if(n <= 1)
        return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;

int main() {
    vector<int> lst;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> lst[i];
    }
    cout << "Sum Of Digits is: " << skjkasdkd(lst);
    return 0;
}