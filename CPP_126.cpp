Here is the completed code:

bool is_sorted(vector<int> lst){
    if (lst.size() <= 1) {
        return true;
    }
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] >= lst[i + 1]) {
            for (int j = 0; j < i; ++j) {
                if (lst[j] == lst[i]) {
                    return false;
                }
            }
        } else {
            return false;
        }
    }
    return true;
}