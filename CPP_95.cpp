bool check_map_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto &pair : dict) {
        if (!allLower && !allUpper) break;
        if (isupper(pair.first[0])) {
            allLower = false;
        } else {
            allUpper = false;
        }
    }

    return allLower || allUpper;
}