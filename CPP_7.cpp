```cpp
bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (!(find(a[i].begin(), a[i].end(), ' ') == string::npos)) continue;
        if (find(b[i].begin(), b[i].end(), ' ') == string::npos) return false;
    }
    return true;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
}