vector<int> make_a_pile(int n){
    vector<int> levels;
    levels.push_back(n);
    for(int i=1; i<n; i++){
        if(n % 2 == 0){
            n += 2;
        } else {
            n += 1;
        }
        levels.push_back(n);
    }
    return levels;
}