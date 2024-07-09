bool is_sorted(const std::vector<int>& lst) {
    if (lst.empty()) {
        return true;
    }
    
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1]) {
            return false;
        }
    }
    
    return true;
}