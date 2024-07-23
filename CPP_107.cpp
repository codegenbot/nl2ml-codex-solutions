vector<int> even_odd_palindrome(int n){
    vector<int> res(2, 0);
    for (int i = 1; i <= n; ++i) {
        string num = to_string(i);
        if (num == string(num.rbegin(), num.rend())) {
            num.back() % 2 == 0 ? ++res[0] : ++res[1];
        }
    }
    return res;
}