vector<float> even_indices;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
        }
    }

    sort(even_indices.begin(), even_indices.end());

    vector<float> l_prime = l;
    int idx = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_prime[i] = even_indices[idx];
            idx++;
        }
    }

    return l_prime;
}