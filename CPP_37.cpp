vector<float> sorted_even = l;
    vector<float> even_values;

    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }

    sort(even_values.begin(), even_values.end());

    size_t even_index = 0;
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            sorted_even[i] = even_values[even_index];
            even_index++;
        }
    }

    return sorted_even;
}