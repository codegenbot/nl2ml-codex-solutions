Here is the completed code:

int skjkasdkd(vector<int> lst){
    int max_prime = 0;
    for(int i=0; i<lst.size();i++){
        if(isPrime(lst[i])){
            if(max_prime < lst[i]){
                max_prime = lst[i];
            }
        }
    }
    int sum_of_digits = 0;
    while(max_prime > 0){
        sum_of_digits += max_prime % 10;
        max_prime /= 10;
    }
    return sum_of_digits;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}