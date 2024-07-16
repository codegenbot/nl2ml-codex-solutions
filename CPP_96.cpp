vector<int> result;
    if(n < 2) return result;
    vector<bool> is_prime(n, true);
    for(int i = 2; i < n; ++i){
        if(is_prime[i]){
            result.push_back(i);
            for(int j = i * 2; j < n; j += i){
                is_prime[j] = false;
            }
        }
    }
    return result;