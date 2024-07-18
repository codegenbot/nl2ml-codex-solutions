vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const string& str : strings) {
        if (str.substr(0, prefix.size()) == prefix) {
            result.push_back(str);
        }
    }
    return result;
}