vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<int>(value);
        if (!boost::any_cast<bool>(value)) continue; // skip non-integer values
        result.push_back(boost::any_cast<int>(value));
    }
    return result;
}