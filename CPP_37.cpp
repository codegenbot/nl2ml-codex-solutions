vector<float> sort_even(vector<float> l) {
    if (l.empty()) return {};
    assert(l.size() % 2 == 0);

    vector<float> sorted_even(l.size());

    vector<float> even_values;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }

    sort(even_values.begin(), even_values.end());

    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            sorted_even[i] = even_values[even_index];
            even_index++;
        }
    }

    return sorted_even;
}