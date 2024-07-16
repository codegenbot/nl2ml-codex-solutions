vector<float> l_odd, l_even;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l_even.push_back(l[i]);
        } else {
            l_odd.push_back(l[i]);
        }
    }
    sort(l_even.begin(), l_even.end());
    
    vector<float> l_sorted;
    int evenIndex = 0, oddIndex = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l_sorted.push_back(l_even[evenIndex++]);
        } else {
            l_sorted.push_back(l_odd[oddIndex++]);
        }
    }
    
    return l_sorted;
}