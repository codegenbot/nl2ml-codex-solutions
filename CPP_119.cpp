Here is the completed code:

string match_parens(vector<string> lst){
    int open = 0, close = 0;
    for(auto s: lst){
        for(auto c : s){
            if(c == '(') open++;
            else close++;
        }
    }
    return (open==close)? "Yes" : "No";
}