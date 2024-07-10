vector<int> filter_integers(list_any values){
    vector<int> result;
    for (auto val : values) {
        if (typeid(val) == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}