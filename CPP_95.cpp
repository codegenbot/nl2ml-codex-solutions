bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!pair.first.empty()) {
            if (isupper(pair.first[0])) {
                allLower = false;
            } else if (islower(pair.first[0])) {
                allUpper = false;
            }
        }
    }

    return allLower || allUpper;
}