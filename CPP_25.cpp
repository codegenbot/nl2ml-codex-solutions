bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    
    return 0;
}