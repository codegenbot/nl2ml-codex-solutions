Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!allLower && !allUpper) break;
        if (isupper(pair.first[0])) allLower = false;
        else if (islower(pair.first[0])) allUpper = false;
    }

    return allLower || allUpper;
}