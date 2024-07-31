bool is_sorted(vector<int> lst) {
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin() , sorted_lst.end());
    
    for (int i = 1; i < sorted_lst.size(); ++i) {
        if (sorted_lst[i] == sorted_lst[i-1]) {
            return false;
        }
    }
    
    return lst == sorted_lst;
}