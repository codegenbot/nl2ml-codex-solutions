vector<float> sort_even(vector<float> l){
    vector<float> l_prime = l;

    for(int i = 0; i < l.size(); i += 2){
        for(int j = i + 2; j < l.size(); j += 2){
            if(l_prime[i] > l_prime[j]){
                swap(l_prime[i], l_prime[j]);
            }
        }
    }

    return l_prime;
}