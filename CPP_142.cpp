int sum_squares(std::vector<int> lst) {
    int total = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0 && i % 4 != 0)
            total += static_cast<int>(std::pow(lst[i], 2));
        else if (i % 4 == 0 && i % 3 != 0)
            total += static_cast<int>(std::pow(lst[i], 3));
    }
    return total;
}