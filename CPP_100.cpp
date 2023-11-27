vector<int> make_a_pile(int n){
    vector<int> stones;
    int stonesInLevel = n;
    for(int i=0; i<n; i++){
        stones.push_back(stonesInLevel);
        if(n % 2 == 0){
            stonesInLevel += 2;
        } else {
            stonesInLevel += 1;
        }
    }
    return stones;
}