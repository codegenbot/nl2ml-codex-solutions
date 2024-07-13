vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
        [](const string& a, const string& b) { return (stoi(a) + stoi(b)) % 2 == 1; });
    vector<string> result(it, lst.end());
    sort(result.begin(), result.end());
    return result;
}