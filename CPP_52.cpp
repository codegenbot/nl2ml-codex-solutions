bool below_threshold(std::vector<int> l, int t) {
    return std::all_of(l.begin(), l.end(), [t](int num) { return num < t; });
}