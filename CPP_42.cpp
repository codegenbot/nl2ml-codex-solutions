vector<int> incr_list(vector<int> l) {
    for (int& num : l) {
        num++;
    }
    return l;
}