string match_parens(vector<string> lst){
    int open = 0;
    int close = 0;

    for(auto s : lst){
        for(char c : s){
            if(c == '(') open++;
            else close++;
        }
    }

    return (open == close) ? "Yes" : "No";
}