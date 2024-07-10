bool issame(vector<float>& a, vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void sort_even(vector<float>& l) {
    vector<float> l_even;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l_even.push_back(l[i]);
        }
    }
    sort(l_even.begin(), l_even.end());
    for (int i = 0, j = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l[i] = l_even[j];
            ++j;
        }
    }
}

int main() {
    vector<float> l = {4, 2, 6, 1, 3, 5};
    vector<float> sorted_l = {1, 2, 3, 4, 5, 6};
  
    sort_even(l);
  
    if (issame(l, sorted_l)) {
        cout << "Results match sorted vector";
    } else {
        cout << "Results don't match sorted vector";
    }

    return 0;
}