vector<float> sort_even(vector<float> l){
    vector<float> l_prime;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            vector<float> even_indices(l.begin() + i, l.begin() + i+1);
            sort(even_indices.begin(), even_indices.end());
            l_prime.push_back(even_indices[0]);
        } else {
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;
}