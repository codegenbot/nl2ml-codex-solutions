string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    string palindrome = str;
    for (int i = 0; i < str.length(); ++i) {
        if (str.substr(0, str.length() - i) == rev_str.substr(i)) {
            palindrome = str + rev_str.substr(0, i);
            break;
        }
    }
    return palindrome;
}