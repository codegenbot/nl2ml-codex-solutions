vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 0; ; i++) {
        if ((i + 1) % 2 == 0) {
            pile.push_back(i * 2 + 3);
        } else {
            pile.push_back(2 * i + 1);
        }
        if (pile.back() > n) break;
    }
    return pile;
}