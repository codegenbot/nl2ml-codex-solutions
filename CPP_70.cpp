vector<int> strange_sort_vector(vector<int> lst){
    sort(lst.begin(), lst.end());
    vector<int> result;
    int left = 0;
    int right = lst.size() - 1;
    while (left <= right) {
        if (left == right) {
            result.push_back(lst[left]);
        } else {
            result.push_back(lst[left]);
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}