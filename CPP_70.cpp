vector<int> result;
    sort(lst.begin(), lst.end());
    int i = 0, j = lst.size() - 1;
    while (i <= j) {
        result.push_back(lst[i]);
        if (i != j) {
            result.push_back(lst[j]);
        }
        i++;
        j--;
    }
    return result;
}