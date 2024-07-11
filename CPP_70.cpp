bool issame(vector<int> a, vector<int> b) {
    return a == b;
}
vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        if (min_val == max_val) {
            result.push_back(min_val);
            lst.clear();
        } else {
            result.push_back(min_val);
            auto it = find_if(lst.begin(), lst.end(), [max_val](int x) { return x == max_val; });
            result.push_back(*it);
            lst.erase(it);
        }
    }
    return result;
}