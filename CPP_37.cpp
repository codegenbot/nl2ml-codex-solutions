std::vector<float> sort_even(const std::vector<float>& l) {
    std::vector<float> even_values;
    std::vector<float> sorted_even_values;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }
    sorted_even_values = even_values;
    std::sort(sorted_even_values.begin(), sorted_even_values.end());
    int sorted_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_values[sorted_index];
            sorted_index++;
        }
    }
    return l;
}