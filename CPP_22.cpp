vector<int> result;
    for (const auto &value : values) {
        if (auto ptr = boost::any_cast<int>(&value)) {
            result.push_back(*ptr);
        }
    }
    return result;