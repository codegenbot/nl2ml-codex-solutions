bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            all_lower = false;
            all_upper = false;
            break;
        } else if (isupper(pair.first[0])) {
            all_upper = false;
        } else {
            all_lower = false;
        }
    }

    return all_lower || all_upper;
}