string match_parens(vector<string> lst) {
    int open = 0, close = 0;
    for (auto& str : lst) {
        for (char c : str) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close) ? "Yes" : "No";
}