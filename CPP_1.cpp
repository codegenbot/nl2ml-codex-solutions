vector<string> groups;
    string current_group;
    int count = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            count++;
            if (count > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            count--;
            if (count > 0) {
                current_group += c;
            } else if (count == 0) {
                groups.push_back(current_group);
                current_group = "";
            }
        }
    }
    
    return groups;
}