vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).ok()) {
            result.push_back(boost::any_cast<int>(value).get());
        }
    }
    return result;
}