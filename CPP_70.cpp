vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        if (min_val == max_val) {
            result.push_back(min_val);
            lst.pop_back();
        } else {
            result.push_back(min_val);
            auto it = std::remove_if(lst.begin(), lst.end(),
                                       [max_val](int x) { return x == max_val; });
            lst.erase(it, lst.end());
            if (!lst.empty()) {
                min_val = *min_element(lst.begin(), lst.end());
                result.push_back(min_val);
                it = std::remove_if(lst.begin(), lst.end(),
                                     [max_val](int x) { return x == max_val; });
                lst.erase(it, lst.end());
            }
        }
    }
    return result;
}