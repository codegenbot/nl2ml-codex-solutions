vector<float> even_indices;
    for (int i = 0; i < l.size(); i += 2) {
        even_indices.push_back(l[i]);
    }
    sort(even_indices.begin(), even_indices.end());
    int even_idx = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l[i] = even_indices[even_idx++];
        }
    }
    return l;
}