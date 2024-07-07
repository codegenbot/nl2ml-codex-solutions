bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower && !allUpper)
            continue;
        else if (!allLower) {
            for (char& c : pair.first) {
                if (islower(c))
                    allLower = true;
                else
                    allUpper = true;
            }
        } else {
            for (char& c : pair.first) {
                if (isupper(c))
                    allUpper = true;
                else
                    allLower = true;
            }
        }
    }

    return allLower || allUpper;
}