string make_palindrome(string str){
    int n = str.size();
    string rev = str;
    reverse(rev.begin(), rev.end());
    for (int i = 0; i < n; i++) {
        if (str.substr(0, n - i) == rev.substr(i)) {
            return str + rev.substr(0, i);
        }
    }
    return str;
}