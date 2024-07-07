```
bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-9f) {
            return false;
        }
    }
    return true;
}