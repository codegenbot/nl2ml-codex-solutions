bool issame(const std::vector<std::string> &a, const std::vector<std::string> &b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}