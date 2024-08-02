bool move_one_ball(const std::vector<int>& arr) {
    std::vector<int> temp_arr = arr; // Make a copy of the input vector
    int n = temp_arr.size();
    for (int i = 0; i < n; ++i) {
        if (std::is_sorted(temp_arr.begin(), temp_arr.end())) {
            return true;
        }
        std::rotate(temp_arr.rbegin(), temp_arr.rbegin() + 1, temp_arr.rend());
    }
    return false;
}