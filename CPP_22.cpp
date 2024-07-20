vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).none()) continue; // skip non-integers
        result.push_back(any_cast<int>(value));
    }
    return result;
}