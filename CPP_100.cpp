Here is the completed code:

vector<int> make_a_pile(int n){
    vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; i++) {
        if ((i % 2) == 0) {
            pile.push_back(stones);
            stones += 2;
        } else {
            pile.push_back(stones);
            stones += 1;
        }
    }
    return pile;
}