vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_braces++;
            if (open_braces > 1) {
                result.push_back(current_group);
                current_group = "";
            }
        }
        current_group += c;
        if (c == ')') {
            open_braces--;
            if (open_braces == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }
    return result;
}