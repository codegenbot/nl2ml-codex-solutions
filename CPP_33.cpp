bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_third(vector<int> l) {
    vector<int> l_prime = l;
    for (int i = 0; i < l_prime.size(); i++) {
        if (i % 3 == 0) {
            sort(l_prime.begin() + i, l_prime.begin() + i + 3);
        }
    }
    return l_prime;
}