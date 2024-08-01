```cpp
int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int i : lst){
        if(i > 1 && isPrime(i)){
            if(i > maxPrime)
                maxPrime = i;
        }
    }
    int sum = 0;
    while(maxPrime > 0){
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) 
        if (n % i == 0)
            return false;
    return true;

}
int main() {
    vector<int> lst = {127, 97, 8192};
    cout << "The sum of the digits in the max prime number is: " << skjkasdkd(lst) << endl;
    return 0;
}