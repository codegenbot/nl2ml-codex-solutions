vector<string> filtered_strings;
    for (const string& s : strings) {
        if (s.substr(0, prefix.size()) == prefix) {
            filtered_strings.push_back(s);
        }
    }
    return filtered_strings;
}