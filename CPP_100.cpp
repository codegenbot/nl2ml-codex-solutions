bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return std::vector<int>(a.begin(), a.end()) == std::vector<int>(b.begin(), b.end());
}