int open = 0, close = 0;
for (string s : lst) {
    for (char c : s) {
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

return (open == 0 && close <= 1) ? "Yes" : "No";