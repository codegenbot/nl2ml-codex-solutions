vector<float> even_vals;
    vector<float> sorted_even_vals;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_vals.push_back(l[i]);
            sorted_even_vals.push_back(l[i]);
        }
    }
    sort(sorted_even_vals.begin(), sorted_even_vals.end());
    int sorted_even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_vals[sorted_even_index];
            sorted_even_index++;
        }
    }
    return l;