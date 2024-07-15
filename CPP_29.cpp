namespace std {
    bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
        return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
    }
    
    std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix){
        std::vector<std::string> result;
        for (const auto& str : vec){
            if (str.find(prefix) == 0){
                result.push_back(str);
            }
        }
        return result;
    }
}