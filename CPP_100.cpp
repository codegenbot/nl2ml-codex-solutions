Here is the solution:

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    while (stones > 0) {
        if (n % 2 == 1) {
            pile.push_back(stones);
            stones = stones + 1;
        } else {
            pile.push_back(stones);
            stones = stones + 2;
        }
        n++;
    }
    return pile;
}