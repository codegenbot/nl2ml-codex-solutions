vector<float> even_indices;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
        }
    }
    sort(even_indices.begin(), even_indices.end());
    
    vector<float> result;
    int evenIdx = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_indices[evenIdx]);
            evenIdx++;
        } else {
            result.push_back(l[i]);
        }
    }
    
    return result;
}