vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0) {
            pile.push_back(stones);
            stones++;
        } else {
            pile.push_back(stones);
            stones += 2;
        }
    }
    return pile;
}