vector<int> strange_sort_vector(vector<int> lst){
    sort(lst.begin(), lst.end());
    vector<int> result;
    int n = lst.size();
    int left = 0, right = n - 1;
    while (left <= right) {
        result.push_back(lst[left]);
        if (left != right) {
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}