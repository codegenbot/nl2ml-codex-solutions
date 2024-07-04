bool is_lower_case(const string &s) {
    for (char c : s) {
        if (!islower(c)) return false;
    }
    return true;
}

bool is_upper_case(const string &s) {
    for (char c : s) {
        if (!isupper(c)) return false;
    }
    return true;
}

bool check_dict_case(map<string,string> dict) {
    if (dict.empty()) return false;
    
    bool all_lower = true, all_upper = true;
    for (const auto &pair : dict) {
        if (!is_lower_case(pair.first)) all_lower = false;
        if (!is_upper_case(pair.first)) all_upper = false;
    }
    
    return all_lower || all_upper;
}