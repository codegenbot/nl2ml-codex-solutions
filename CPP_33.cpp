vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    vector<int> temp;
    
    for(int i = 0; i < l.size(); i++){
        if(l[i] % 3 == 0){
            temp.push_back(l[i]);
        }
    }
    
    sort(temp.begin(), temp.end());
    
    int j = 0;
    for(int i = 0; i < l.size(); i++){
        if(l[i] % 3 == 0){
            l_prime[i] = temp[j];
            j++;
        }
    }
    
    return l_prime;
}