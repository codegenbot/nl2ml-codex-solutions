Here is the solution:

bool solveBoolean(string s) {
    bool res = true;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '&') {
            res &= (s[i+1] == 'T');
            i++;
        }
        else if(s[i] == '|') {
            res |= (s[i+1] == 'T');
            i++;
        }
    }
    return res;
}