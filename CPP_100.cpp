vector<int> make_a_pile(int n){
    vector<int> result;
    for(int i = 0; i < n; ++i){
        result.push_back(n + 2 * i);
    }
    return result;
}