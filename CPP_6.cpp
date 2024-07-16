vector<int> parse_nested_parens(string paren_string) {
    vector<int> depths;
    int depth = 0, max_depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            if (depth > max_depth) {
                max_depth = depth;
            }
        } else if (c == ')') {
            depth--;
        } else if (c == ' ') {
            depths.push_back(max_depth);
            max_depth = 0;
        }
    }
    depths.push_back(max_depth);

    return depths;
}