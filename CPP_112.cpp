vector<string> reverse_delete(string s, string c){
    string result;
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string rev_result = result;
    reverse(rev_result.begin(), rev_result.end());
    if(result == rev_result){
        return {result, "True"};
    }
    return {result, "False"};
}