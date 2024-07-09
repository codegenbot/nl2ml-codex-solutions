Here is the completed code:

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    while (stones > 0) {
        pile.push_back(stones);
        if (n % 2 == 1)
            n++;
        else
            n++;
        stones = n;
        n /= 2;
    }
    return pile;
}