vector<string> result;
    string current_group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            if (open_count > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            open_count--;
            if (open_count > 0) {
                current_group += c;
            } else if (open_count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}