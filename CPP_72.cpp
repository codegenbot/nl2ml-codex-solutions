bool will_it_fly(const vector<int>& q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    if (sum <= w && equal(q.begin(), q.end(), q.rbegin())) {
        return true;
    }
    
    return false;
}