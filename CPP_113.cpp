vector<string> odd_count(vector<string> lst);

bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}