vector<int> filter_integers(list_any values){
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).empty()) {
            int num = boost::any_cast<int>(value);
            result.push_back(num);
        }
    }
    return result;
}