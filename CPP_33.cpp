vector<int> sorted_indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_indices.push_back(i);
        }
    }
    sort(sorted_indices.begin(), sorted_indices.end(), [&l](int a, int b) {
        return l[a] < l[b];
    });

    vector<int> result = l;
    for (int i = 0; i < sorted_indices.size(); ++i) {
        result[sorted_indices[i]] = l[sorted_indices[i]];
    }

    return result;
}