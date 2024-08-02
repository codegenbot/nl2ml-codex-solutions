bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!all_upper && !all_lower) break;
        if (isupper(it->first[0])) {
            all_lower = false;
        } else if (islower(it->first[0])) {
            all_upper = false;
        }
    }

    return all_upper || all_lower;
}