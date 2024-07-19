string make_palindrome(string str){
    if(str.empty()) return "";
    int n = str.size();
    for(int i=n-1; i>=0; --i){
        if(is_palindrome(str.substr(i))){
            string prefix = str.substr(0,i);
            string suffix = str.substr(i);
            reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    return str + str;
}