Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    auto it = std::next(std::min_element(copy.begin(), copy.end()));
    return *it == copy[0] ? -1 : *(prev(it));
}