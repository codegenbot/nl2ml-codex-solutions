#include <vector>
#include <algorithm>
#include <string>

vector<int> even_odd_palindrome(int n);

bool issame(vector<int> a, vector<int> b);

vector<int> even_odd_palindrome(int n){
    vector<int> res(2, 0);
    for(int i = 1; i <= n; ++i){
        string s = to_string(i);
        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());
        if(s == rev_s){
            if(i % 2 == 0){
                res[0]++;
            } else {
                res[1]++;
            }
        }
    }
    return res;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(issame(even_odd_palindrome(1), vector<int>{0, 1}));
    return 0;
}