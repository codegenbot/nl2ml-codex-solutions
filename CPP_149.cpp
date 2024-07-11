Here is the completed code:

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            return (a.length() % 2 != 0 && b.length() % 2 == 0) ||
                   (a.length() % 2 == 0 && b.length() % 2 != 0);
    });
    lst.erase(it, lst.end());
    
    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.size() != b.size()) {
                return a.size() < b.size();
            } else {
                return a < b;
            }
        });
    
    return lst;
}