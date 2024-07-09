Here's the solution:

bool is_sorted(vector<int> lst) {
    if (lst.size() <= 1)
        return true;

    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] >= lst[i + 1]) {
            auto end = unique(lst.begin() + i, lst.end());
            if (end != lst.begin() + i)
                return false;
        } else
            return false;
    }
    return true;
}