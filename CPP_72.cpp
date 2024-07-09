#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (!is_palindrome(str)) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

bool is_palindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return t == s;
}