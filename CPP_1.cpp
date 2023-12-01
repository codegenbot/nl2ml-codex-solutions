vector<string> separate_paren_groups(string paren_string){
    vector<string> groups;
    string group = "";
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count == 0) {
                group += c;
                groups.push_back(group);
                group = "";
            } else {
                group += c;
            }
        }
    }

    return groups;
}