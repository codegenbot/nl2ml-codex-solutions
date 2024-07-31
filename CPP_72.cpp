bool will_it_fly(vector<int> q, int w) {
    string s = "";
    for (int i : q) {
        s += to_string(i);
    }
    if (!s.compare(to_string(reverse(q)))) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

vector<int> reverse(vector<int> v) {
    vector<int> result;
    for (int i = v.size() - 1; i >= 0; --i) {
        result.push_back(v[i]);
    }
    return result;
}