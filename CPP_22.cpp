vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<int>(value));
            result.push_back(value.get<int>());
    }
    return result;
}