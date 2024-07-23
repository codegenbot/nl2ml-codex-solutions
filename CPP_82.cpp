Here is the solution:

bool prime_length(string str){
    int n = str.length();
    bool is_prime = true;
    
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            is_prime = false;
            break;
        }
    }
    
    return is_prime;
}