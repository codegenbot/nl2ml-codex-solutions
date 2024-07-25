vector<float> odd_indices;
    vector<float> even_indices;

    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
        } else {
            odd_indices.push_back(l[i]);
        }
    }

    sort(even_indices.begin(), even_indices.end());

    vector<float> sorted_l;
    int odd_index = 0;
    int even_index = 0;

    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            sorted_l.push_back(even_indices[even_index]);
            even_index++;
        } else {
            sorted_l.push_back(odd_indices[odd_index]);
            odd_index++;
        }
    }

    return sorted_l;
}