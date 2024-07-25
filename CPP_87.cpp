std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (x == 1) {
            for (int j = lst[i].size() - 1; j >= 0; j--) {
                result.push_back({i, j});
            }
        } else {
            for (int j = 0; j < lst[i].size(); j++) {
                result.push_back({i, j});
            }
        }
    }
    return result;
}