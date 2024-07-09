vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<int>(value, 0);
        if (!boost::any_cast<bool>(value)) continue;
        result.push_back(boost::any_cast<int>(value));
    }
    return result;
}