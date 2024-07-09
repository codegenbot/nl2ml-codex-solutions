vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int i = 0, j = lst.size() - 1;
    while (i <= j) {
        if (i == j) {
            result.push_back(lst[i]);
            break;
        }
        result.push_back(lst[i]);
        result.push_back(lst[j]);
        i++;
        j--;
    }
    return result;
}