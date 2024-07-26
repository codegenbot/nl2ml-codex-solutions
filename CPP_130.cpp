bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(vector<int>{1}, vector<int>{1}));
    assert(issame(vector<int>{1, 3}, vector<int>{1, 3}));
    return 0;
}