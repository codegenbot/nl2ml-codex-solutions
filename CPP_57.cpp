bool monotonic(vector<float> l){
    return is_sorted(l.begin(), l.end()) || is_sorted(l.rbegin(), l.rend());
}