vector<int> filter_integers(list_any values){
    vector<int> result;
    for (boost::any& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}