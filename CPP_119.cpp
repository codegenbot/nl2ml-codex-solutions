bool match_parens(const vector<string>& lst) {
    int open = 0, close = 0;
    for (const auto &str : lst) {
        for (char c : str) {
            if (c == '(') {
                open++;
            } else {
                if (open > 0) {
                    open--;
                } else {
                    close++;
                }
            }
        }
    }
    return (open == 0 && close == 0);
}