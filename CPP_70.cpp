vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());
        result.push_back(minVal);
        result.push_back(maxVal);
        lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
        lst.erase(std::remove(lst.begin(), lst.end(), maxVal), lst.end());
    }

    return result;
}